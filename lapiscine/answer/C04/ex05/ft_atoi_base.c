/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:10:05 by rakim             #+#    #+#             */
/*   Updated: 2024/07/07 11:23:25 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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

void	check_base(int nbr, char *base)
{
	int	idx;
	int	idx2;

	idx = 0;
	if (!base || base[1] == '\0')
		return ;
	while (base[idx])
	{
		idx2 = idx + 1;
		if (base[idx] == '+' || base[idx] == '-')
			return ;
		while (base[idx2])
		{
			if (base[idx] == base[idx2])
				return ;
			idx2++;
		}
		idx++;
	}
	use_base(nbr, base, idx);
}

int	ft_atoi_base(char *str, char *base)
{

}

int	main(void)
{
	char str[] = " \n\f ---+--+1234ab567akim";
	char base[] = "42gyeonsa";
	ft_atoi_base(rakim, base);
	return 0;
}
