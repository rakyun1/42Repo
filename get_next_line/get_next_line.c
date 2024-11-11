/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:52:04 by rakim             #+#    #+#             */
/*   Updated: 2024/11/11 21:14:41 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	make_new_node(int fd, t_list *current)
{
	// char	*temp;
	// int		read_size;

	// temp = (char *)malloc(sizeof(char) * (BUFFER_SIZE));
	// read_size = read(fd, temp, BUFFER_SIZE);
	// current.buffer = NULL;
	// if (read_size < 0)
	// 	return (current);
	// if (ft_strchr(temp, '\n'))
	// while (read_size == BUFFER_SIZE)
	// {
	// 	temp = ft_realloc(temp, ft_strlen(temp) + BUFFER_SIZE);
	// 	read_size = read(fd, temp2, BUFFER_SIZE);
	// 	temp = ft_strjoin(temp, temp2);

	// }
	current->buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE));
	if (current->buffer == NULL)
		return ;
	current->fd = fd;
	current->count = 1;
	current->next = NULL;
}

char	*get_next_line(int fd)
{
	static t_list	*list;
	t_list			current;
	int				idx;

	if (is_contains(fd, list))
	{

	}
	else
	{
		make_new_node(fd, &current);
		if (current.buffer == NULL)
			return (NULL);
		add_node(list, current);
		return (find_enter(&current));
	}
	return (current.buffer);
}
