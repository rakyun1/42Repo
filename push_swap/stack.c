/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:21:44 by rakim             #+#    #+#             */
/*   Updated: 2025/01/27 15:22:13 by rakim            ###   ########.fr       */
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

t_node	**convert_rank(t_node **stack, t_rank rank)
{
	t_node	*current;
	int		idx;

	current = *stack;
	while (current)
	{
		idx = 0;
		while (idx < rank.length)
		{
			if (rank.rank_array[idx] == current->value)
			{
				current->value = idx;
				break ;
			}
			idx++;
		}
		current = current->next_node;
	}
	return (stack);
}

t_node	**make_stack(int length, char *input[], t_rank rank)
{
	t_node	**stack;
	t_node	*current;
	t_node	*temp;
	int		idx;

	if (length == 0)
	{
		stack = (t_node **)malloc(sizeof(t_node *));
		*stack = NULL;
		return (stack);
	}
	idx = 1;
	stack = (t_node **)malloc(sizeof(t_node *));
	*stack = make_new_node(ft_atoi(input[idx++]));
	temp = *stack;
	while (idx < length)
	{
		current = make_new_node(ft_atoi(input[idx++]));
		temp->next_node = current;
		current->prev_node = temp;
		temp = temp->next_node;
	}
	return (convert_rank(stack, rank));
}
