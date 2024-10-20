/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:00:52 by rakim             #+#    #+#             */
/*   Updated: 2024/07/10 15:28:49 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] && s2[idx])
	{
		if (s1[idx] == s2[idx])
			idx ++;
		else
			break ;
	}
	if (s1[idx] > s2[idx])
		return (1);
	else
		return (0);
}

int	get_size(char *input)
{
	int	idx;

	idx = 0;
	while (input[idx])
	{
		idx++;
	}
	return (idx);
}

void	sort(int length, char **input)
{
	int		last;
	int		next;
	int		current;
	char	*temp;

	last = length - 1;
	current = 0;
	while (last > 0)
	{
		current = 0;
		next = current + 1;
		while (next < length)
		{
			if (ft_strcmp(input[current], input[next]))
			{
				temp = input[current];
				input[current] = input[next];
				input[next] = temp;
			}
			current++;
			next++;
		}
		last--;
	}
}

int	main(int length, char *input[])
{
	int	size;
	int	idx;

	sort(length, input);
	idx = 1;
	while (input[idx])
	{
		size = get_size(input[idx]);
		write(1, input[idx], size);
		write(1, "\n", 1);
		idx++;
	}
	return (0);
}
