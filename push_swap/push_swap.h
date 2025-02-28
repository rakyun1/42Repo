/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:35:27 by rakim             #+#    #+#             */
/*   Updated: 2025/01/28 16:20:58 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next_node;
	struct s_node	*prev_node;
}		t_node;

typedef struct s_rank
{
	int	*rank_array;
	int	length;
}		t_rank;

void	throw_error(t_node **stack);
void	free_all(t_node **stack);
int		is_digit(int c);
int		ft_atoi(const char *nptr);
void	add_node_to_stack(t_node **stack, int value);
void	swap_top_element(t_node **stack);
void	pop_push_top_element(t_node **from, t_node **to, int division);
void	rotation_stack(t_node **stack);
void	convert_rank(t_node **stack, t_rank rank);
void	reverse_rotation_stack(t_node **stack);
int		*sort_input(int length, t_node **stack);
void	sort_stack(t_node **stack_a, t_node **stack_b, int length);
int		count_stack(t_node	**stack);
void	init_stack(t_node ***stack);
void	sort_stack_low_number(t_node **stack_a, t_node **stack_b);
int		ft_strlen(const char *s);

#endif