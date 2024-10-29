/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:56:20 by rakim             #+#    #+#             */
/*   Updated: 2024/10/29 15:19:16 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	char	*temp;

//	check_exception(str);

	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'd' || *str == 'i')
				ft_putnbr_fd(va_arg(ap, int), 1);
			if (*str == 's')
			{
				temp = va_arg(ap, char*);
				write(1, temp, ft_strlen(temp));
			}
			str++;
		}
		else
		{
			write(1, str, 1);
			str++;
		}
	}
}