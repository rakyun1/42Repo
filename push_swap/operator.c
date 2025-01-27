/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:31:18 by rakim             #+#    #+#             */
/*   Updated: 2025/01/27 15:23:09 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_top_element(t_node **stack)
{
	t_node	*temp_first;
	t_node	*temp_second;

	if (*stack == NULL || (*stack)->next_node == NULL)
		return ;
	temp_first = *stack;
	temp_second = (*stack)->next_node;
	temp_first->prev_node = temp_second;
	if (temp_second->next_node)
	{
		temp_first->next_node = temp_second->next_node;
		temp_second->next_node->prev_node = temp_first;
	}
	else
		temp_first->next_node = NULL;
	temp_second->next_node = temp_first;
	(*stack) = temp_second;
}

void	pop_push_top_element(t_node **from, t_node **to, int division)
{
	t_node	*temp_from;

	if (*from == NULL)
		return ;
	temp_from = *from;
	*from = temp_from->next_node;
	if (*from)
		(*from)->prev_node = NULL;
	if (*to == NULL)
	{
		*to = temp_from;
		(*to)->next_node = NULL;
	}
	else
	{
		temp_from->next_node = *to;
		temp_from->prev_node = NULL;
		(*to)->prev_node = temp_from;
		*to = temp_from;
	}
	if (division == 1)
		write(1, "pb\n", 3);
	else
		write(1, "pa\n", 3);
}

void	rotation_stack(t_node **stack)
{
	t_node	*tail;
	t_node	*head;

	if ((*stack)->next_node == NULL)
		return ;
	tail = *stack;
	while (tail->next_node)
	{
		tail = tail->next_node;
	}
	head = *stack;
	*stack = (*stack)->next_node;
	(*stack)->prev_node = NULL;
	tail->next_node = head;
	head->prev_node = tail;
	head->next_node = NULL;
	write(1, "ra\n", 3);
}

void	reverse_rotation_stack(t_node **stack)
{
	t_node	*tail;

	if (*stack == NULL || (*stack)->next_node == NULL)
		return ;
	tail = *stack;
	while (tail->next_node)
	{
		tail = tail->next_node;
	}
	tail->prev_node->next_node = NULL;
	(*stack)->prev_node = tail;
	tail->prev_node = NULL;
	tail->next_node = *stack;
	*stack = tail;
}
