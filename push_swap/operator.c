/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:31:18 by rakim             #+#    #+#             */
/*   Updated: 2025/01/26 21:02:25 by rakim            ###   ########.fr       */
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

// #include <stdio.h>
// t_node	*make_new_node(int value)
// {
// 	t_node	*result;

// 	result = (t_node *)malloc(1 * sizeof(t_node));
// 	result->value = value;
// 	result->next_node = NULL;
// 	result->prev_node = NULL;
// 	return (result);
// }

// void	print_stack(t_node *stack)
// {
// 	t_node *temp = stack;
// 	while (temp)
// 	{
// 		if (!temp->value)
// 			break;
// 		printf("%d ", temp->value);
// 		temp = temp->next_node;
// 	}
// 	printf("\n");
// }

// int main(void)
// {
// 	t_node *stack_a = make_new_node(1);
// 	stack_a->next_node = make_new_node(2);
// 	stack_a->next_node->prev_node = stack_a;
// 	stack_a->next_node->next_node = make_new_node(3);
// 	stack_a->next_node->next_node->prev_node = stack_a->next_node;
// 	stack_a->next_node->next_node->next_node = make_new_node(4);
// 	stack_a->next_node->next_node->next_node->prev_node = stack_a->next_node->next_node;

// 	t_node *stack_b = NULL;

// 	printf("Before sa:\n");
// 	print_stack(stack_a);

// 	swap_top_element(&stack_a);

// 	printf("After sa:\n");
// 	print_stack(stack_a);

// 	swap_top_element(&stack_a);
// 	printf("\nbefore push:\n");
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);

// 	pop_push_top_element(&stack_a, &stack_b);

// 	printf("\nAfter 1st push to b:\n");
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);

// 	pop_push_top_element(&stack_a, &stack_b);
// 	printf("\nAfter 2nd push to b:\n");
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);

// 	pop_push_top_element(&stack_a, &stack_b);
// 	printf("\nAfter 3nd push to b:\n");
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);

// 	pop_push_top_element(&stack_b, &stack_a);
// 	printf("\nAfter 1nd push to a:\n");
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);

// 	pop_push_top_element(&stack_a, &stack_b);
// 	printf("\nAfter 1nd push to b:\n");
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);


// 	pop_push_top_element(&stack_a, &stack_b);
// 	printf("\nAfter 1nd push to b:\n");
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);

// 	printf("\nRotate stack b:\n");
// 	rotation_stack(&stack_b);
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);

// 	printf("\nRotate stack b:\n");
// 	rotation_stack(&stack_b);
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);

// 	printf("\nRotate stack b:\n");
// 	rotation_stack(&stack_b);
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);


// 	printf("\nRevers rotate stack b:\n");
// 	reverse_rotation_stack(&stack_b);
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);


// 	printf("\nRevers rotate stack b:\n");
// 	reverse_rotation_stack(&stack_b);
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);

// 	printf("\nRevers rotate stack b:\n");
// 	reverse_rotation_stack(&stack_b);
// 	printf("stack a : ");
// 	print_stack(stack_a);
// 	printf("stack b : ");
// 	print_stack(stack_b);

// 	return 0;
// }



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