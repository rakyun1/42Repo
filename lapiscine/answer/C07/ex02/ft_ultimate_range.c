/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:16:06 by rakim             #+#    #+#             */
/*   Updated: 2024/07/10 21:37:49 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	idx;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	idx = 0;
	*range = (int *)malloc(4 * length);
	if (*range == NULL)
		return (-1);
	while (min < max)
		(*range)[idx++] = min++;
	return (length);
}
