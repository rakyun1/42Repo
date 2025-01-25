/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:34:24 by rakim             #+#    #+#             */
/*   Updated: 2025/01/25 14:48:25 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*make_new_node(int value)
{
	t_node	*result;

	result = (t_node *)malloc(1 * sizeof(t_node));
	result->value = value;
	result->next_node = NULL;
	result->prev_node = NULL;
	return (result);
}

t_node	**make_stack_a(int length, char *input[])
{
	t_node 	**stack_a;
	t_node	*current;
	t_node	*temp;
	int		idx;

	idx = 1;
	stack_a = (t_node **)malloc(sizeof(t_node *));
	*stack_a = make_new_node(ft_atoi(input[idx++]));
	temp = *stack_a;
	while (idx < length)
	{
		current = make_new_node(ft_atoi(input[idx++]));
		temp->next_node = current;
		current->prev_node = temp;
		temp = temp->next_node;
	}
	return (stack_a);
}

t_node	**make_stack_b(int length)
{
	t_node **stack_b;
	t_node	*temp;
	int		count;

	stack_b = (t_node **)malloc(sizeof(t_node *));
	*stack_b = (t_node *)malloc(1 * sizeof(t_node));
	temp = *stack_b;
	count = 0;
	while (count < length - 1)
	{
		temp->next_node = (t_node *)malloc(1 * sizeof(t_node));
		temp = temp->next_node;
		count++;
	}
	return (stack_b);
}