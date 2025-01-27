/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:07:20 by rakim             #+#    #+#             */
/*   Updated: 2025/01/27 20:58:30 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_stack_sorted(t_node **stack_a, t_node **stack_b)
{
	t_node	*temp;

	temp = *stack_a;
	while (temp && temp->next_node)
	{
		if (temp->value > temp->next_node->value)
			return (0);
		temp = temp->next_node;
	}
	if ((*stack_b))
		while ((*stack_b))
			pop_push_top_element(stack_b, stack_a, 2);
	return (1);
}

void	sort_stack(t_node **stack_a, t_node **stack_b, int length)
{
	int		current_bit_count;
	int		while_count;

	current_bit_count = 1;
	while (current_bit_count < length)
	{
		while_count = 0;
		while (while_count < length)
		{
			if (current_bit_count * 2 >= length)
				if (validate_stack_sorted(stack_a, stack_b))
					return ;
			if (((*stack_a)->value & current_bit_count) == 0)
				pop_push_top_element(stack_a, stack_b, 1);
			else
				rotation_stack(stack_a);
			while_count++;
		}
		while ((*stack_b))
			pop_push_top_element(stack_b, stack_a, 2);
		current_bit_count = current_bit_count * 2;
	}
}

void	*sort(int **arr, int length)
{
	int	temp;
	int	i;
	int	j;
	int	check_sorted;

	i = 0;
	check_sorted = 0;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - 1 - i)
		{
			if ((*arr)[j] > (*arr)[j + 1])
			{
				check_sorted = 1;
				temp = (*arr)[j];
				(*arr)[j] = (*arr)[j + 1];
				(*arr)[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	if (check_sorted == 0)
		throw_error();
}

int	*sort_input(size_t length, t_node **stack)
{
	int		*result;
	t_node	*temp;
	size_t	idx;

	result = (int *)malloc((length) * sizeof(int));
	idx = 0;
	temp = *stack;
	while (temp)
	{
		result[idx] = temp->value;
		temp = temp->next_node;
		idx++;
	}
	sort(&result, (int)idx);
	return (result);
}
