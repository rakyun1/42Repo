/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:52:04 by rakim             #+#    #+#             */
/*   Updated: 2024/11/11 17:32:46 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	make_new_node(int fd)
{
	t_list	result;

	result.buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	result.buffer[BUFFER_SIZE] = '\0';
	result.fd = fd;
	result.count = 1;
	result.next = NULL;
	return (result);
}

char	*get_next_line(int fd)
{
	static t_list	*list;
	t_list			current;
	char			*result;
	int				idx;

	current = make_new_node(fd);
	if (read(fd, current.buffer, BUFFER_SIZE) < 0)
		return (NULL);
	result = current.buffer;
	if (ft_streln(result) != BUFFER_SIZE)
	{
		while (result == NULL)
		{
			current.buffer = ft_realloc(current.buffer, \
			BUFFER_SIZE * (current.count + 1));
			if (current.buffer == NULL)
				return (NULL);
			current.count++;
			if (read(fd, current.buffer, BUFFER_SIZE) < 0)
				return (NULL);
			result = ft_strchr(current.buffer, '\n');
		}
	}
	return (result);
}