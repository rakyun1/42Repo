/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:35:27 by rakim             #+#    #+#             */
/*   Updated: 2025/01/26 21:17:13 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int	value;
	struct s_node *next_node;
	struct s_node *prev_node;
}		t_node;

typedef struct s_rank
{
	int	*rank;
	int	length;
}		t_rank;


void	throw_error(void);
int		is_digit(int c);
int		ft_atoi(const char *nptr);
t_node	**make_stack(int length, char *input[]);
void	swap_top_element(t_node **stack);
void	pop_push_top_element(t_node **from, t_node **to);
void	rotation_stack(t_node **stack);
void	reverse_rotation_stack(t_node **stack);

#endif