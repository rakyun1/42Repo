/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:35:27 by rakim             #+#    #+#             */
/*   Updated: 2025/01/25 17:00:43 by rakim            ###   ########.fr       */
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

void	throw_error(void);
int		is_digit(int c);
int		ft_atoi(const char *nptr);
t_node	**make_stack_a(int length, char *input[]);
t_node	**make_stack_b(int length);

#endif