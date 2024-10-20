/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:25:13 by rakim             #+#    #+#             */
/*   Updated: 2024/07/14 13:15:13 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>

int	check_exception(int length)
{
	if (length < 2)
	{
		write(1, "File name missing.\n", 20);
		return (0);
	}
	else if (length > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	return (1);
}

int	read_file(int *bytes_read, int fd)
{
	char	buffer[1024];

	*bytes_read = read(fd, buffer, sizeof(buffer));
	while (*bytes_read > 0)
	{
		if (write(1, buffer, *bytes_read) != *bytes_read)
		{
			write (1, "Cannot read file.\n", 18);
			close(fd);
			return (0);
		}
		*bytes_read = read(fd, buffer, sizeof(buffer));
	}
	return (1);
}

int	main(int length, char *input[])
{
	int		fd;
	int		bytes_read;

	if (!check_exception(length))
		return (1);
	else
	{
		fd = open(input[1], O_RDONLY);
		if (fd == -1)
		{
			write (1, "Cannot read file.\n", 18);
			return (1);
		}
		if (!read_file(&bytes_read, fd))
			return (1);
		if (bytes_read == -1)
			write (1, "Cannot read file.\n", 18);
		close(fd);
	}
	return (0);
}
