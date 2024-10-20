/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:42:57 by rakim             #+#    #+#             */
/*   Updated: 2024/07/18 13:46:46 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft.h"

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
			break ;
		str++;
	}
	return (number);
}

int	check_isoperator(char *str)
{
	int	minus_count;
	int	number;

	minus_count = 0;
	while (str[0] == '+' || str[0] == '-')
	{
		if (str[0] == '-')
			minus_count++;
		str++;
	}
	number = find_number(str);
	if (minus_count % 2 == 0)
		return (number);
	else
		return (-number);
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

	result = check_isoperator(check_isspace(str));
	find_number(str);
	return (result);
}
