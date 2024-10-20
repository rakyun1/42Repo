/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:07:33 by rakim             #+#    #+#             */
/*   Updated: 2024/07/10 17:39:30 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive(int result, int depth, int power, int nb)
{
	if (depth == power)
		return (result);
	return (recursive(result * nb, depth + 1, power, nb));
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power != 0)
		return (0);
	return (recursive(nb, 1, power, nb));
}
