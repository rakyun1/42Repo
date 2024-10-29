/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:56:20 by rakim             #+#    #+#             */
/*   Updated: 2024/10/29 19:49:58rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	char	*temp;
	int		str_idx;

//	check_exception(str);

	str_idx = 0;
	va_start(ap, str);
	while (str[str_idx] != '\0')
	{
		if (str[str_idx] == '%')
		{
			str_idx++;
			if (str[str_idx] == 'd' || str[str_idx] == 'i')
			{
				long t = va_arg(ap, int);
				ft_putnbr_fd(t, 1);

			}
			if (str[str_idx] == 's')
			{
				temp = va_arg(ap, char *);
				write(STDOUT, temp, ft_strlen(temp));
			}
			if (str[str_idx] == 'c')
				write(STDOUT, str, 1);
			if (str[str_idx] == 'u')
				ft_putnbr_fd((long)va_arg(ap, unsigned int), 1);
			str_idx++;
		}
		else
		{
			write(STDOUT, &str[str_idx], 1);
			str_idx++;
		}
	}
}