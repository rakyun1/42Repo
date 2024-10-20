/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:41:28 by rakim             #+#    #+#             */
/*   Updated: 2024/07/16 21:16:33 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_file_read.h"

void	print_mode(int fd)
{
	char	buffer[BUFFER_SIZE];
	int		bytes_read;

	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(STDOUT_FILENO, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
}

int	main(int length, char *input[])
{
	int		idx;
	char	*prog_name;

	if (length == 1)
		print_mode(STDIN_FILENO);
	else
	{
		idx = 1;
		prog_name = basename(input[0]);
		if (ft_strcmp(input[idx], "-c") == 0)
		{
			idx++;
			handle_option(ft_atoi(input[idx]), input, length);
		}
		else
			print_tail(input, length, 0, idx);
	}
}
