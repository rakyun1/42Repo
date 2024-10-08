/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:14:24 by rakim             #+#    #+#             */
/*   Updated: 2024/10/08 17:09:16 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	get_digit(int n)
{
	int	result;

	if (n < 0)
		n = -n;
	result = 1;
	while (n / 10 > 0)
	{
		result++;
		n /= 10;
	}
	return (result);
}

void	put_num(char *result, int n, int end)
{
	while (n / 10 > 0)
	{
		result[end--] = n % 10 + '0';
		n /= 10;
	}
	result[end] = n + '0';
}

int	check_exception(int n, char **result)
{
	if (n == 0)
	{
		*result = (char *)malloc(2);
		(*result)[0] = '0';
		(*result)[1] = '\0';
		return (1);
	}
	else if (n == -2147483648)
	{
		*result = (char *)malloc(12);
		(*result)[0] = '-';
		(*result)[1] = '2';
		(*result)[2] = '1';
		(*result)[3] = '4';
		(*result)[4] = '7';
		(*result)[5] = '4';
		(*result)[6] = '8';
		(*result)[7] = '3';
		(*result)[8] = '6';
		(*result)[9] = '4';
		(*result)[10] = '8';
		(*result)[11] = '\0';
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		total_len;

	if (check_exception(n, &result))
		return (result);
	total_len = get_digit(n);
	if (n < 0)
	{
		result = (char *)malloc(total_len + 2);
		result[0] = '-';
		result[total_len + 1] = '\0';
		if (n != -2147483648)
			put_num(result, -n, total_len);
	}
	else
	{
		result = (char *)malloc(total_len + 1);
		result[total_len] = '\0';
		put_num(result, n, total_len - 1);
	}
	return (result);
}
