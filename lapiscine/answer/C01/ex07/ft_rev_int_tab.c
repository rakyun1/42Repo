/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 22:34:58 by rakim             #+#    #+#             */
/*   Updated: 2024/07/01 22:41:13 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	temp;

	start = 0;
	while (start < size)
	{
		temp = tab[start];
		tab[start] = tab[size - 1];
		tab[size - 1] = temp;
		start++;
		size--;
	}
}
