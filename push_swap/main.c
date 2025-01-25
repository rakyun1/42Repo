/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:35:23 by rakim             #+#    #+#             */
/*   Updated: 2025/01/25 15:31:45 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(int length, char *input[])
{
	int	idx;

	idx = 1;
	while (idx < length)
	{
		if (!is_digit(*input[idx]))
			throw_error();
		idx++;
	}
}

void	sort_stack(t_node **stack_a, t_node **stack_b)
{

	

}

int	main(int length, char *input[])
{
	if (length <= 1)
		throw_error();
	check_input(length, input);
	sort_stack(make_stack_a(length, input), make_stack_b(length));


	return (0);
}
