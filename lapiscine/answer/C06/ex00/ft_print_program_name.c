/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:42:15 by rakim             #+#    #+#             */
/*   Updated: 2024/07/10 13:46:58 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int length, char *input[])
{
	int	idx;

	idx = 0;
	while (input[0][idx])
		idx++;
	if (length > 0)
	{
		write(1, input[0], idx);
	}
	write(1, "\n", 1);
	return (0);
}
