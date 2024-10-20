/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:30:13 by rakim             #+#    #+#             */
/*   Updated: 2024/07/18 11:37:03 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	idx;

	idx = 0;
	result = (int *)malloc(length * sizeof(int));
	while (idx < length)
	{
		result[idx] = f(tab[idx]);
		idx++;
	}
	return (result);
}

//
//#include<stdio.h>
//int	add_two(int a)
//{
//	return a + 2;
//}
//
//
//int	main(void)
//{
//	int	tab[] = {1, 2, 3, 4, 5};
//	int	length = 5;
//
//	
//	int *result = ft_map(tab, length, &add_two);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("result [%d] = %d\n", i, result[i]);
//	}
//	return (0);
//}
