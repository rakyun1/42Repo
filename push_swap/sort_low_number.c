/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:33:18 by rakim             #+#    #+#             */
/*   Updated: 2025/01/28 16:51:55 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_three_count(t_node **stack_a, int one, int two)
{
	if ((*stack_a)->value == two)
	{
		if ((*stack_a)->next_node->value == one)
		{
			rotation_stack(stack_a);
			swap_top_element(stack_a);
		}
		else
			rotation_stack(stack_a);
	}
	else if ((*stack_a)->value == one)
	{
		if ((*stack_a)->next_node->value == two)
			reverse_rotation_stack(stack_a);
		else
			swap_top_element(stack_a);
	}
	else if ((*stack_a)->next_node->value == two)
	{
		reverse_rotation_stack(stack_a);
		swap_top_element(stack_a);
	}
}

void	sort_stack_low_number(t_node **stack_a, t_node **stack_b)
{
	int	stack_len;

	stack_len = count_stack(stack_a);
	if (stack_len >= 4)
	{
		while (count_stack(stack_a) > 3)
		{
			if ((*stack_a)->value < (stack_len - 1) / 2)
				pop_push_top_element(stack_a, stack_b, 1);
			else
				rotation_stack(stack_a);
		}
	}
	if (stack_len == 3)
		sort_stack_three_count(stack_a, 1, 2);
	else if (stack_len == 4)
		sort_stack_three_count(stack_a, 2, 3);
	else
		sort_stack_three_count(stack_a, 3, 4);
	while ((*stack_b))
		pop_push_top_element(stack_b, stack_a, 0);
	if ((*stack_a)->value > (*stack_a)->next_node->value)
		swap_top_element(stack_a);
}
