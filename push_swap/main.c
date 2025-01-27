/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:35:23 by rakim             #+#    #+#             */
/*   Updated: 2025/01/27 17:42:23 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(int length, char *input[])
{
	int		out_idx;
	int		in_idx;
	char	*current;

	out_idx = 1;
	in_idx = 0;
	while (out_idx < length)
	{
		current = input[out_idx];
		while (current[in_idx])
		{
			if (!is_digit(current[in_idx]))
				throw_error();
			in_idx++;
		}
		out_idx++;
	}
}

int	main(int length, char *input[])
{
	t_rank	rank;

	if (length <= 1)
		throw_error();
	check_input(length, input);
	rank.rank_array = sort_input((size_t)length, input);
	rank.length = length - 1;
	sort_stack(make_stack(length, input, rank), \
	make_stack(0, NULL, rank), length - 1);
	return (0);
}
