/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:01:14 by rakim             #+#    #+#             */
/*   Updated: 2025/01/28 12:58:50 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_node **stack)
{
	t_node	*for_free;
	t_node	*next_node;

	for_free = *stack;
	while (for_free)
	{
		next_node = for_free->next_node;
		for_free->prev_node = NULL;
		for_free->next_node = NULL;
		free(for_free);
		for_free = next_node;
	}
	free(stack);
	exit(0);
}

void	throw_error(t_node **stack)
{
	write(1, "ERROR\n", 6);
	if (stack != NULL)
		free_all(stack);
	else
		exit(0);
}
