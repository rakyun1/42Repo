/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:21:30 by rakim             #+#    #+#             */
/*   Updated: 2024/11/11 20:17:31 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_fd_in(t_list *list, int fd)
{
	if (list == NULL)
		return (-1);
	while (list->next)
	{
		if (list->fd == fd)
			return (read(fd, list->buffer, BUFFER_SIZE));
		list = list->next;
	}
	return (-1);
}