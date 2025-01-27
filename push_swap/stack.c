/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:21:44 by rakim             #+#    #+#             */
/*   Updated: 2025/01/27 20:24:53 by rakim            ###   ########.fr       */
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

void	convert_rank(t_node **stack, t_rank rank)
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
}

void	add_node_to_stack(t_node **stack, int value)
{
	t_node	*current;
	t_node	*temp;

	temp = *stack;
	if (*stack == NULL)
	{
		*stack = make_new_node(value);
		return ;
	}
	while (temp->next_node)
	{
		temp = temp->next_node;
	}
	current = make_new_node(value);
	temp->next_node = current;
	current->prev_node = temp;
}

int	count_stack(t_node	**stack)
{
	t_node	*temp;
	int		count;

	temp = *stack;
	count = 0;
	while (temp)
	{
		temp = temp->next_node;
		count++;
	}
	return (count);
}
