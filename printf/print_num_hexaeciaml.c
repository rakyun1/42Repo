/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num_hexaeciaml.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:21:46 by rakim             #+#    #+#             */
/*   Updated: 2024/10/30 13:55:36 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	print_num_hexaeciaml(unsigned int num, char *base)
{
	char hex_str[9];
	int	idx;
	int i;

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

void	print_in_lowercase_hexaeciaml(unsigned int arg)
{
	char hex_digits[] = "0123456789abcdef";
	print_num_hexaeciaml(arg, hex_digits);
}

void	print_in_uppercase_hexaeciaml(unsigned int arg)
{
	char hex_digits[] = "0123456789ABCDEF";
	print_num_hexaeciaml(arg, hex_digits);
}