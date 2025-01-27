/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:35:23 by rakim             #+#    #+#             */
/*   Updated: 2025/01/27 21:06:43 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(int length, char *input[], t_node **stack)
{
	int		out_idx;
	int		in_idx;
	int		current_value;
	char	*current;

	out_idx = 1;
	while (out_idx < length)
	{
		current = input[out_idx];
		in_idx = 0;
		while (current[in_idx])
		{
			current_value = ft_atoi(current + in_idx);
			if (current[in_idx] != '0' && current_value == 0)
				throw_error();
			add_node_to_stack(stack, current_value);
			in_idx++;
			if (current[in_idx] != ' ')
				while (current[in_idx] != ' ' && current[in_idx])
					in_idx++;
		}
		out_idx++;
	}
}

int	main(int length, char *input[])
{
	t_rank	rank;
	t_node	**stack_a;
	t_node	**stack_b;

	if (length <= 1)
		throw_error();
	stack_a = (t_node **)malloc(sizeof(t_node *));
	*stack_a = NULL;
	check_input(length, input, stack_a);
	length = count_stack(stack_a);
	rank.rank_array = sort_input((size_t)length, stack_a);
	rank.length = length;
	convert_rank(stack_a, rank);
	stack_b = (t_node **)malloc(sizeof(t_node *));
	*stack_b = NULL;
	sort_stack(stack_a, stack_b, length);
	return (0);
}
