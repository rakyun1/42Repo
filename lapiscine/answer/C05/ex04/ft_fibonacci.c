/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:30:33 by rakim             #+#    #+#             */
/*   Updated: 2024/07/10 17:40:47 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive(int prev, int current, int depth, int target)
{
	if (depth == target)
		return (current);
	return (recursive(current, current + prev, depth + 1, target));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index == 3)
		return (2);
	return (recursive(1, 2, 3, index));
}
