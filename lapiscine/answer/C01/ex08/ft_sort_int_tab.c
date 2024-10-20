/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 22:56:08 by rakim             #+#    #+#             */
/*   Updated: 2024/07/02 12:51:48 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	while_count;
	int	current_idx;
	int	temp;

	while_count = 0;
	while (while_count < size)
	{
		current_idx = 0;
		while (current_idx < size - 1)
		{
			if (tab[current_idx] > tab[current_idx + 1])
			{
				temp = tab[current_idx];
				tab[current_idx] = tab[current_idx + 1];
				tab[current_idx + 1] = temp;
			}
			current_idx++;
		}
		while_count++;
	}
}
