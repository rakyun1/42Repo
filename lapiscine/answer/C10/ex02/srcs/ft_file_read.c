/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:41:11 by rakim             #+#    #+#             */
/*   Updated: 2024/07/17 22:28:55 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_file_read.h"

void	do_read_without_opt(char *total_buffer, int total_bytes, char *buffer)
{
	int	line_count;
	int	idx;

	line_count = 0;
	total_bytes -= 2;
	idx = 0;
	while (total_buffer[total_bytes] && line_count < 10)
	{
		if (total_buffer[total_bytes] == '\n')
		{
			buffer[idx] = total_buffer[total_bytes];
			line_count++;
		}
		else
			buffer[idx] = total_buffer[total_bytes];
		total_bytes--;
		idx++;
	}
	idx -= 2;
	while (idx >= 0)
		write (1, &buffer[idx--], 1);
	write(1, "\n", 1);
}

void	do_read_with_opt(char *t_buffer, int t_bytes, char *buffer, int r_byte)
{
	int	byte_count;
	int	idx;

	idx = 0;
	byte_count = 0;
	t_bytes -= 2;
	while (t_buffer[t_bytes] && byte_count < r_byte)
	{
		buffer[idx] = t_buffer[t_bytes--];
		byte_count++;
		idx++;
	}
	idx -= 2;
	while (idx >= 0)
		write (1, &buffer[idx--], 1);
	write(1, "\n", 1);
}

void	read_file(int fd, int read_byte, char *prog_name, char *input)
{
	char	buffer[BUFFER_SIZE];
	int		bytes_read;
	int		total_bytes;
	char	*total_buffer;

	total_bytes = 0;
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		total_bytes += bytes_read;
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	fd = open(input, O_RDONLY);
	total_buffer = (char *)malloc(total_bytes);
	bytes_read = read(fd, total_buffer, total_bytes);
	if (bytes_read < 0)
		write_error(prog_name, "read error");
	if (read_byte <= 0)
		do_read_without_opt(total_buffer, total_bytes, buffer);
	else
		do_read_with_opt(total_buffer, total_bytes, buffer, read_byte);
}

void	print_tail(char **input, int length, int read_byte, int idx)
{
	int		fd;

	while (input[idx])
	{
		fd = open(input[idx], O_RDONLY);
		if (fd == -1)
			write_error(basename(input[0]), input[idx]);
		else
		{
			if ((!strcmp(input[1], "-c") && length > 4) \
				|| (strcmp(input[1], "-c") && length > 2))
			{
				write (1, "==> ", 4);
				write (1, input[idx], len(input[idx]));
				write (1, " <==\n", 5);
			}
			read_file(fd, read_byte, basename(input[0]), input[idx]);
		}
		idx++;
		if (input[idx] != NULL)
			write(1, "\n", 1);
	}
	close(fd);
}

void	handle_option(int read_byte, char **input, int length)
{
	int		idx;

	idx = 3;
	if (read_byte < 0)
		write_invalid_number(input[2], input[0]);
	else
		print_tail(input, length, read_byte, idx);
}
