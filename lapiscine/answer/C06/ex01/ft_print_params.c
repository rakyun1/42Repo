/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:47:38 by rakim             #+#    #+#             */
/*   Updated: 2024/07/10 13:54:41 by rakim            ###   ########.fr       */
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
	int	input_count;
	int	size;

	input_count = 1;
	while (input_count < length)
	{
		size = get_size(input[input_count]);
		write(1, input[input_count], size);
		write(1, "\n", 1);
		input_count++;
	}
	return (0);
}
