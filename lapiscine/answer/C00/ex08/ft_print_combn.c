/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:24:53 by rakim             #+#    #+#             */
/*   Updated: 2024/06/30 16:11:54 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	find_comb(char *numbers, int length, int current, int start);
void	print(char *numbers, int length);

void	ft_print_combn(int n)
{
	char	numbers[9];

	find_comb(numbers, n, 0, 0);
}

void	find_comb(char *numbers, int length, int current, int start)
{
	int	i;

	if (current == length)
	{
		print(numbers, length);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		numbers[current] = i + '0';
		find_comb(numbers, length, current + 1, i + 1);
		i++;
	}
}

void	print(char *numbers, int length)
{
	int		i;

	i = 0;
	while (i < length)
	{
		write(1, &numbers[i], 1);
		i++;
	}
	if (numbers[0] != 10 - length + '0')
	{
		write(1, ", ", 2);
	}
}
