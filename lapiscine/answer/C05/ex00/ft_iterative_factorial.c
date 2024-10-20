/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:32:26 by rakim             #+#    #+#             */
/*   Updated: 2024/07/10 17:34:19 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	answer;
	int	count;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	count = 2;
	answer = 1;
	while (nb >= count)
		answer *= count++;
	return (answer);
}
