/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:47:42 by rakim             #+#    #+#             */
/*   Updated: 2025/01/27 17:43:45 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(int c)
{
	if ((c >= 48 && c <= 57) || c == 32)
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
	int	sign;
	int	result;

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
	return (result * sign);
}
