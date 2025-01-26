/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:35:23 by rakim             #+#    #+#             */
/*   Updated: 2025/01/26 21:20:12 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(int length, char *input[])
{
	int	idx;

	idx = 1;
	while (idx < length)
	{
		if (!is_digit(*input[idx]))
			throw_error();
		idx++;
	}
}

void	sort_stack(t_node **stack_a, t_node **stack_b)
{

	if (stack_a == NULL)
		return;
	
	if (stack_b == NULL)
		return;

}

int *sort(int *arr, int length)
{
	int temp;
	int	i;
	int	j;

	i = 0;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - 1 - i)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

int	*sort_input(size_t length, char *input[])
{
	int		*result;
	size_t	idx;

	result = (int *)malloc((length - 1) * sizeof(int));
	idx = 0;
	while (idx < length - 1)
	{
		result[idx] = ft_atoi(input[idx + 1]);
		idx++;
	}
	return (sort(result, (int)idx));
}


#include <stdio.h>
void print_array(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int	main(int length, char *input[])
{
	t_rank	rank_length;

	if (length <= 1)
		throw_error();
	check_input(length, input);
	rank_length.rank = sort_input((size_t)length, input);
	print_array(rank_length.rank, length - 1);
	sort_stack(make_stack(length, input), make_stack(0, NULL));


	return (0);
}
