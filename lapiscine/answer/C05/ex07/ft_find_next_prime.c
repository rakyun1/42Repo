/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:30:41 by rakim             #+#    #+#             */
/*   Updated: 2024/07/10 21:54:18 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_sqrt(int current, int max_value, int target)
{
	current = 1;
	while (current < max_value && current * current <= target)
	{
		if (current * current == target)
			return (current);
		current++;
	}
	return (current);
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

int	ft_find_next_prime(int nb)
{
	int	max_value;
	int	division;
	int	is_prime;

	if (nb <= 2)
		return (2);
	is_prime = 1;
	max_value = ft_sqrt(nb);
	division = 2;
	while (division <= max_value)
	{
		if (nb % division == 0)
		{
			is_prime = 0;
			break ;
		}
		division++;
	}
	if (is_prime)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
