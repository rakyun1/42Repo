/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:12:02 by rakim             #+#    #+#             */
/*   Updated: 2024/07/04 20:19:21 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	change_to_hex(unsigned char unprintable)
{
	char	buffer[2];

	buffer[0] = "0123456789abcdef"[unprintable >> 4];
	buffer[1] = "0123456789abcdef"[unprintable & 0x0F];
	write(1, "\\", 1);
	write(1, &buffer[0], 1);
	write(1, &buffer[1], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		idx;

	idx = 0;
	while (1)
	{
		if (str[idx] == '\0' && str[idx + 1] == '\0')
		{
			break ;
		}
		if (str[idx] < ' ' || str[idx] > '~')
		{
			change_to_hex((unsigned char)str[idx]);
		}
		else
		{
			write(1, &str[idx], 1);
		}
		idx++;
	}
}
