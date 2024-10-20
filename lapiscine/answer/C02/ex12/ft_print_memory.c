/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:46:19 by rakim             #+#    #+#             */
/*   Updated: 2024/07/04 15:47:36 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_printable_words(unsigned char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] < ' ' || str[idx] > '~')
			write(1, ".", 1);
		else
			write(1, &str[idx], 1);
		idx++;
	}
	write(1, " ", 1);
}

void	print_two_words(unsigned char *str)
{
	int		idx;
	char	buffer[5];

	idx = 0;
	while (str[idx])
	{
		buffer[0] = "0123456789abcdef"[str[idx] >> 4];
		buffer[1] = "0123456789abcdef"[str[idx] & 0xF];
		if (str[idx])
		{
			idx++;
			buffer[3] = "0123456789abcdef"[str[idx] >> 4];
			buffer[4] = "0123456789abcdef"[str[idx] & 0xF];
			write(1, buffer, 5);
		}
		else
			write(1, buffer, 3);
		idx++;
		if (str[idx])
			write(1, " ", 1);
	}
	write(1, " ", 1);
}

// 이 함수는 미완성
void	print_hex_address(unsigned char *str)
{
	unsigned long	address = (unsigned long)str;
	char hex_digits[] = "0123456789abcdef";
	char buffer[16];
	int i;

    for (i = 0; i < 16; i++) {
        buffer[15 - i] = hex_digits[address % 16];
        address /= 16;
    }

    write(STDOUT_FILENO, buffer, 16);
    write(STDOUT_FILENO, ": ", 3);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char *ptr = (unsigned char *)addr;
	int		idx;
	unsigned char	str[17];

	idx = 0;
	str[16] = '\0';
	while(ptr[idx])
	{
		if (idx % 16 == 0 && idx != 0)
		{
			print_hex_address(str);
			print_two_words(str);
			print_printable_words(str);
			if (ptr[idx])
				write(1, "\n", 1);
		}
		str[idx % 16] = ptr[idx];
		idx++;
	}
}

int	main(void)
{
	char str[] = "Bonjour les aminches\n\n\nc\t est fou\ntout\0ce qu on ";
	ft_print_memory(str, 47);
	return 0;
}
