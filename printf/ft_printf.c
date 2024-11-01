/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:27:34 by rakim             #+#    #+#             */
/*   Updated: 2024/11/01 16:40:30 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	print_str(va_list ap, char formatter, int *result)
{
	char	*temp;

	if (formatter == 's')
	{
		temp = va_arg(ap, char *);
		if (temp == NULL)
			(*result) += write(1, "(null)", ft_strlen("(null)"));
		else
			(*result) += write(1, temp, ft_strlen(temp));
	}
	if (formatter == 'c')
		(*result) += write(1, (char []){(char)va_arg(ap, int)}, 1);
}

static	void	print_hexadecimal(va_list ap, char formatter, int *result)
{
	if (formatter == 'x')
		print_in_lowercase_hexadecimal((unsigned int)va_arg(ap, int), result);
	if (formatter == 'X')
		print_in_uppercase_hexadecimal((unsigned int)va_arg(ap, int), result);
	if (formatter == 'p')
		print_address_hexadecimal((unsigned long)va_arg(ap, void *), result);
}

static	void	check_formatter(va_list ap, char formatter, int *result)
{
	if (formatter == 'c' || formatter == 's')
		print_str(ap, formatter, result);
	if (formatter == 'd' || formatter == 'i')
		ft_putnbr_fd((long)va_arg(ap, int), 1, result);
	if (formatter == 'u')
		ft_putnbr_fd((long)va_arg(ap, unsigned int), 1, result);
	if (formatter == '%')
	{
		(*result) += write(1, "%", 1);
	}
	if (formatter == 'x' || formatter == 'X' || \
		formatter == 'p')
		print_hexadecimal(ap, formatter, result);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		str_idx;
	int		result;

	str_idx = 0;
	result = 0;
	va_start(ap, str);
	while (str[str_idx] != '\0')
	{
		if (str[str_idx] == '%')
		{
			str_idx++;
			check_formatter(ap, str[str_idx], &result);
			str_idx++;
		}
		else
			result += write(1, &str[str_idx++], 1);
	}
	va_end(ap);
	return (result);
}
