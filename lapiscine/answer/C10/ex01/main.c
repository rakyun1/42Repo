/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:52:38 by rakim             #+#    #+#             */
/*   Updated: 2024/07/16 09:31:36 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<libgen.h>
#include<errno.h>

#define BUFFER_SIZE	30000

int	len(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	read_file(int fd)
{
	char	buffer[BUFFER_SIZE];
	int		bytes_read;

	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
}

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

void	write_error(char *prog_name, char *input)
{
	write (STDERR_FILENO, prog_name, len(prog_name));
	write (STDERR_FILENO, ": ", 2);
	write (STDERR_FILENO, input, len(input));
	write (STDERR_FILENO, ": ", 2);
	write (STDERR_FILENO, strerror(errno), len(strerror(errno)));
	write (STDERR_FILENO, "\n", 1);
}

int	main(int length, char *input[])
{
	int		fd;
	int		idx;
	char	*prog_name;

	if (length == 1)
		print_mode(STDIN_FILENO);
	else
	{
		idx = 1;
		prog_name = basename(input[0]);
		while (idx < length)
		{
			fd = open(input[idx], O_RDONLY);
			if (fd == -1)
				write_error(prog_name, input[idx]);
			else
				read_file(fd);
			close(fd);
			idx++;
		}
	}
	return (0);
}
