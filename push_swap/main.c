/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:35:23 by rakim             #+#    #+#             */
/*   Updated: 2025/01/28 16:21:56 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(int length, char *input[], t_node **stack)
{
	int		out_idx;
	int		current_idx;
	int		current_value;
	char	*current;
	int		current_len;

	out_idx = 1;
	while (out_idx < length)
	{
		current_idx = 0;
		current = input[out_idx];
		current_len = ft_strlen(current);
		while (current_idx < current_len)
		{
			current_value = ft_atoi(current + current_idx);
			if (current_value == 0 && current[current_idx] != '0')
				throw_error(stack);
			while (current[current_idx] != ' ' && current[current_idx])
				current_idx++;
			while (current[current_idx] == ' ')
				current_idx++;
			add_node_to_stack(stack, current_value);
		}
		out_idx++;
	}
}

int	main(int length, char *input[])
{
	t_rank	rank;
	t_node	**stack_a;
	t_node	**stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (length <= 1)
		throw_error(stack_a);
	init_stack(&stack_a);
	check_input(length, input, stack_a);
	length = count_stack(stack_a);
	rank.rank_array = sort_input(length, stack_a);
	rank.length = length;
	convert_rank(stack_a, rank);
	init_stack(&stack_b);
	if (length == 3 || length == 5 || length == 4)
		sort_stack_low_number(stack_a, stack_b);
	else
		sort_stack(stack_a, stack_b, length);
	free(stack_b);
	free(rank.rank_array);
	free_all(stack_a);
	return (0);
}
