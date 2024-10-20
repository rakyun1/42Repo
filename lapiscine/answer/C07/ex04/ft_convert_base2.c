/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:12:00 by rakim             #+#    #+#             */
/*   Updated: 2024/07/14 10:09:28 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*reverse_result(char *result, int result_len)
{
	int		start;
	char	temp;

	start = 0;
	while (start < result_len)
	{
		temp = result[start];
		result[start] = result[result_len];
		result[result_len] = temp;
		start++;
		result_len--;
	}
	return (result);
}

void	put_input(char *result, int nbr, int base_len, char *base)
{
	int	r_idx;

	r_idx = 0;
	if (nbr < 0)
		result[r_idx++] = base[-(nbr % base_len)];
	else
		result[r_idx++] = base[nbr % base_len];
	nbr = nbr / base_len;
	while (nbr > base_len || nbr < -base_len)
	{
		if (nbr < 0)
			result[r_idx++] = base[-(nbr % base_len)];
		else
			result[r_idx++] = base[nbr % base_len];
		nbr = nbr / base_len;
	}
	if (nbr < 0)
	{
		result[r_idx++] = base[-nbr];
		result[r_idx] = '-';
	}
	else
		result[r_idx] = base[nbr];
}

int	abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

char	*nbr_to_base(int nbr, char *base, int base_len)
{
	int		division;
	int		count;
	char	*result;

	division = nbr / base_len;
	count = 1;
	if (nbr < 0)
		count += 1;
	while (division > base_len || division < -base_len)
	{
		division = division / base_len;
		count++;
	}
	if (nbr != -2147483648 && abs(nbr) < base_len)
	{
		count -= 1;
		result = (char *)malloc(sizeof(char) * count);
		result[0] = base[nbr % base_len];
	}
	else
	{
		result = (char *)malloc(sizeof(char) * count);
		put_input(result, nbr, base_len, base);
	}
	return (reverse_result(result, count));
}
