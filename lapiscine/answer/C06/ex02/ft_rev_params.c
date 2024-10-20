/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:55:41 by rakim             #+#    #+#             */
/*   Updated: 2024/07/10 13:59:17 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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

int	main(int length, char *input[])
{
	int	size;

	length--;
	while (length >= 1)
	{
		size = get_size(input[length]);
		write(1, input[length], size);
		write(1, "\n", 1);
		length--;
	}
	return (0);
}
