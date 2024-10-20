/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:39:45 by rakim             #+#    #+#             */
/*   Updated: 2024/07/10 13:39:46 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_sqrt(int current, int max_value, int target)
{
	current = 1;
	while (current < max_value)
	{
		if (current * current == target)
			return (current);
		current++;
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	int	current;
	int	units_count;
	int	max_value;

	current = nb / 10;
	units_count = 2;
	max_value = 1;
	while (current > 10)
	{
		current /= 10;
		units_count++;
	}
	if (units_count % 2 != 0)
	{
		units_count = (units_count / 2) + 1;
		while (units_count-- > 0)
			max_value *= 10;
	}
	else
	{
		units_count = units_count / 2;
		while (units_count-- > 0)
			max_value *= 10;
	}
	return (find_sqrt(current, max_value, nb));
}
