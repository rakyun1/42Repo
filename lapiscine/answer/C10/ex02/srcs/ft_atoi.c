/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:57:29 by rakim             #+#    #+#             */
/*   Updated: 2024/07/16 21:13:32 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	find_number(char *str)
{
	int	number;

	number = 0;
	while (*str)
	{
		if (str[0] >= '0' && str[0] <= '9')
		{
			number *= 10;
			number += str[0] - '0';
		}
		else
			return (-1);
		str++;
	}
	return (number);
}

char	*check_isoperator(char *str)
{
	while (str)
	{
		if (str[0] == '-' || str[0] == '+')
			str++;
		else
			break ;
	}
	return (str);
}

char	*search_isspace(char *str, char *isspace)
{
	int		iss_idx;
	int		is_contains;

	is_contains = 0;
	while (str)
	{
		iss_idx = 0;
		while (iss_idx < 5)
		{
			if (str[0] == isspace[iss_idx] || str[0] == ' ')
				is_contains = 1;
			iss_idx++;
		}
		if (is_contains)
			str++;
		else
			break ;
		is_contains = 0;
	}
	return (str);
}

char	*check_isspace(char *str)
{
	char	isspace[5];

	isspace[0] = '\f';
	isspace[1] = '\n';
	isspace[2] = '\r';
	isspace[3] = '\t';
	isspace[4] = '\v';
	return (search_isspace(str, isspace));
}

int	ft_atoi(char *str)
{
	int	result;

	result = find_number(check_isoperator(check_isspace(str)));
	return (result);
}
