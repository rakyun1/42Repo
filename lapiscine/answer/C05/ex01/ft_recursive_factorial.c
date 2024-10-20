/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:45:01 by rakim             #+#    #+#             */
/*   Updated: 2024/07/10 21:52:36 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive(int result, int depth, int end)
{
	if (depth == end)
		return (result);
	else
		return (recursive(result += result * depth, depth + 1, end));
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (recursive(1, 1, nb));
}
