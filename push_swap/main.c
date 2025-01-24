/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:35:23 by rakim             #+#    #+#             */
/*   Updated: 2025/01/24 20:48:27 by rakim            ###   ########.fr       */
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

void	push_to_stack_a(int length, char *input[])
{

}


int	main(int length, char *input[])
{
	if (length <= 1)
		throw_error();
	check_input(length, input);
	push_to_stack_a(length, input);


	return (0);
}



// sa = a스택의 맨 위 두 개의 요소의 자리를 바꿈
// sb = b스택의 맨 위 두 개의 요소의 자리를 바꿈
// ss = sa, sb 명령 두 개를 동시에 함

// pa = b스택의 가장 위 요소를 a스택에 넣음
// pb = a스택의 가장 위 요소를 b스택에 넣음

// ra = 스택 a의 모든 요소를 위로 한 칸씩 이동함
// rb = 스택 b의 모든 요소를 위로 한 칸씩 이동함
// rr = ra, rb를 동시에 진행

// rra = 스택 a의 모든 요소를 아래로 한 칸씩 이동함
// rrb = 스택 b의 모든 요소를 아래로 한 칸씩 이동함
// rrr = rra, rrb를 동시에 진행