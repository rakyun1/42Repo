/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:56:34 by rakim             #+#    #+#             */
/*   Updated: 2024/11/01 16:26:52 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	print_num_hexadecimal_address(unsigned long num, \
char *base, int *result)
{
	char	hex_str[16];
	int		idx;

	if (num == 0)
	{
		(*result) += write(1, "(nil)", 5);
		return ;
	}
	idx = 0;
	(*result) += write(1, "0x", 2);
	while (num > 0)
	{
		hex_str[idx++] = base[num % 16];
		num /= 16;
	}
	idx--;
	while (idx >= 0)
	{
		(*result) += write(1, &hex_str[idx], 1);
		idx--;
	}
}

static	void	print_num_hexadecimal(unsigned int num, char *base, int *result)
{
	char	hex_str[9];
	int		idx;

	if (num == 0)
	{
		(*result) += write(1, "0", 1);
		return ;
	}
	idx = 0;
	while (num > 0)
	{
		hex_str[idx++] = base[num % 16];
		num /= 16;
	}
	while (--idx >= 0)
		(*result) += write(1, &hex_str[idx], 1);
}

void	print_in_lowercase_hexadecimal(unsigned int arg, int *result)
{
	char	*hex_digits;

	hex_digits = (char *)malloc(sizeof(char) * 17);
	if (hex_digits == NULL)
		return ;
	ft_strlcpy(hex_digits, "0123456789abcdef", 17);
	print_num_hexadecimal(arg, hex_digits, result);
	free(hex_digits);
}

void	print_in_uppercase_hexadecimal(unsigned int arg, int *result)
{
	char	*hex_digits;

	hex_digits = (char *)malloc(sizeof(char) * 17);
	if (hex_digits == NULL)
		return ;
	ft_strlcpy(hex_digits, "0123456789ABCDEF", 17);
	print_num_hexadecimal(arg, hex_digits, result);
	free(hex_digits);
}

void	print_address_hexadecimal(unsigned long arg, int *result)
{
	char	*hex_digits;

	hex_digits = (char *)malloc(sizeof(char) * 17);
	if (hex_digits == NULL)
		return ;
	ft_strlcpy(hex_digits, "0123456789abcdef", 17);
	print_num_hexadecimal_address(arg, hex_digits, result);
	free(hex_digits);
}
