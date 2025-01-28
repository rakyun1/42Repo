/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:47:42 by rakim             #+#    #+#             */
/*   Updated: 2025/01/28 16:21:17 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(int c)
{
	if ((c >= 48 && c <= 57))
		return (2048);
	else
		return (0);
}

int	move_pointer(const char **nptr)
{
	int	result;

	result = 1;
	while (**nptr < 48 || **nptr > 57)
	{
		if (**nptr == ' ' || **nptr == '\t' \
		|| **nptr == '\n' || **nptr == '\v' \
		|| **nptr == '\f' || **nptr == '\r')
			(*nptr)++;
		else if (**nptr == '-')
		{
			result *= -1;
			(*nptr)++;
			break ;
		}
		else if (**nptr == '+')
		{
			(*nptr)++;
			break ;
		}
		else
			break ;
	}
	return (result);
}

int	ft_atoi(const char *nptr)
{
	int			sign;
	long long	result;

	if (*nptr == '\0')
		return (0);
	sign = move_pointer(&nptr);
	result = 0;
	while (*nptr >= 48 && *nptr <= 57)
	{
		if (result == 0)
			result = *nptr - 48;
		else
		{
			result *= 10;
			result += *nptr - 48;
		}
		nptr++;
	}
	result = result * sign;
	if (result > 2147483647 || result < -2147483648)
		result = 0;
	return ((int)result);
}

int	ft_strlen(const char *s)
{
	int	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
