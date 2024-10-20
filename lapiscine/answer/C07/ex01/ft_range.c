/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:54:05 by rakim             #+#    #+#             */
/*   Updated: 2024/07/14 10:10:31 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	*result;
	int	idx;

	if (min >= max)
		return (NULL);
	idx = 0;
	length = max - min;
	result = (int *)malloc(4 * length);
	while (min < max)
		result[idx++] = min++;
	return (result);
}

/*
int	main(void)
{
	int min = 3;
	int max = 7;
	
	int *result = ft_range(min, max);

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", result[i]);
	}
	return 0;

}
*/
