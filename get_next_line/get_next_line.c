/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:52:04 by rakim             #+#    #+#             */
/*   Updated: 2024/11/12 14:25:53 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	add_new_node(t_list **list, t_list *new_node)
{
	t_list	*temp;

	if (*list == NULL)
	{
		*list = new_node;
		return ;
	}
	temp = *list;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
}

static t_list	*make_new_node_with(int fd)
{
	t_list	*result;
	int		idx;

	idx = 0;
	result = (t_list *)malloc(1 * sizeof(t_list));
	if (result == NULL)
		return (NULL);
	result->buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE));
	result->buffer_for_free = result->buffer;
	if (result->buffer == NULL)
		return (NULL);
	while (idx < BUFFER_SIZE - 1)
	{
		result->buffer[idx] = '\0';
		idx++;
	}
	result->fd = fd;
	result->next = NULL;
	return (result);
}

static t_list	*is_contains(t_list **list, int fd)
{
	t_list	*temp;

	if (!list)
		return (NULL);
	temp = *list;
	while (temp)
	{
		if (temp->fd == fd)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

static char	*find_enter_in(t_list *node)
{
	char	*temp;
	char	*result;
	int		idx;

	idx = 0;
	while (node->buffer[idx])
	{
		if (node->buffer[idx] == '\n')
		{
			result = ft_strdup(node->buffer);
			node->buffer += (idx + 1);
			return (result);
		}
		idx++;
	}
	temp = (char *)malloc(sizeof(char) * (BUFFER_SIZE));
	read(node->fd, temp, BUFFER_SIZE);
	node->buffer = ft_strjoin(node->buffer, temp);
	free(temp);
	return (find_enter_in(node));
}

char	*get_next_line(int fd)
{
	static t_list	**list;
	t_list			*new_node;

	if (list == NULL)
	{
		list = (t_list **)malloc(sizeof(t_list *));
		if (list == NULL)
			return (NULL);
		*list = NULL;
	}
	new_node = is_contains(list, fd);
	if (new_node == NULL)
	{
		new_node = make_new_node_with(fd);
		if (new_node == NULL)
			return (NULL);
		add_new_node(list, new_node);
	}
	return (find_enter_in(new_node));
}
