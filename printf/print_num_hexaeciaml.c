/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:21:46 by rakim             #+#    #+#             */
/*   Updated: 2024/10/30 14:29:20 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	print_num_hexadecimal(unsigned int num, char *base)
{
	char hex_str[9];
	int	idx;

	if (num == 0)
	{
		write(1, "0", 1);
		return ;
	}
	idx = 0;
	while (num > 0)
	{
		hex_str[idx++] = base[num % 16];
		num /= 16;
	}
	while (idx >= 0)
		write(1, &hex_str[--idx], 1);
}

void	print_in_lowercase_hexadecimal(unsigned int arg)
{
	char hex_digits[] = "0123456789abcdef";
	print_num_hexadecimal(arg, hex_digits);
}

void	print_in_uppercase_hexadecimal(unsigned int arg)
{
	char hex_digits[] = "0123456789ABCDEF";
	print_num_hexadecimal(arg, hex_digits);
}

void	print_address_hexadecimal(unsigned long arg)
{
	char hex_digits[] = "0123456789abcdef";
	print_num_hexadecimal_address(arg, hex_digits);
}

void	print_num_hexadecimal_address(unsigned long num, char *base)
{
	char hex_str[16];
	int	idx;

	if (num == 0)
	{
		write(1, "(nil)", 5);
		return ;
	}
	idx = 0;
	write(1, "0x", 2);
	while (num > 0)
	{
		hex_str[idx++] = base[num % 16];
		num /= 16;
	}
	idx--;
	while (idx >= 0)
	{
		write(1, &hex_str[idx], 1);
		idx--;
	}
}
