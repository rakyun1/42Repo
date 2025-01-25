/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:31:18 by rakim             #+#    #+#             */
/*   Updated: 2025/01/25 18:24:09 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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

void	pop_push_top_element(t_node **from, t_node **to)
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
}

// 간단한 노드 생성 함수
t_node	*create_node(int value)
{
	t_node	*new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next_node = NULL;
	new_node->prev_node = NULL;
	return (new_node);
}
t_node	*create_node_without_value()
{
	t_node	*new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->next_node = NULL;
	new_node->prev_node = NULL;
	return (new_node);
}

// 스택 출력 함수
void	print_stack(t_node *stack)
{
	t_node *temp = stack;
	while (temp)
	{
		if (!temp->value)
			break;
		printf("%d ", temp->value);
		temp = temp->next_node;
	}
	printf("\n");
}

int main(void)
{
	t_node *stack_a = create_node(1);
	t_node *stack_b = create_node_without_value(1);
	stack_a->next_node = create_node(2);
	stack_a->next_node->prev_node = stack_a;
	stack_a->next_node->next_node = create_node(3);
	stack_a->next_node->next_node->prev_node = stack_a->next_node;

	printf("Before sa:\n");
	print_stack(stack_a);

	swap_top_element(&stack_a);

	printf("After sa:\n");
	print_stack(stack_a);

	swap_top_element(&stack_a);
	printf("\nbefore push:\n");
	printf("stack a : ");
	print_stack(stack_a);
	printf("stack b : ");
	print_stack(stack_b);

	pop_push_top_element(&stack_a, &stack_b);

	printf("\nAfter 1st push to b:\n");
	printf("stack a : ");
	print_stack(stack_a);
	printf("stack b : ");
	print_stack(stack_b);

	pop_push_top_element(&stack_a, &stack_b);
	printf("\nAfter 2nd push to b:\n");
	printf("stack a : ");
	print_stack(stack_a);
	printf("stack b : ");
	print_stack(stack_b);

	pop_push_top_element(&stack_a, &stack_b);
	printf("\nAfter 3nd push to b:\n");
	printf("stack a : ");
	print_stack(stack_a);
	printf("stack b : ");
	print_stack(stack_b);

	pop_push_top_element(&stack_b, &stack_a);
	printf("\nAfter 1nd push to a:\n");
	printf("stack a : ");
	print_stack(stack_a);
	printf("stack b : ");
	print_stack(stack_b);

	return 0;
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