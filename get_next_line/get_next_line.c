/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:52:04 by rakim             #+#    #+#             */
/*   Updated: 2024/11/14 15:14:33 by rakim            ###   ########.fr       */
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
	if (result->buffer == NULL)
		return (NULL);
	result->buffer_for_free = result->buffer;
	while (idx < BUFFER_SIZE)
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
	char	*result;
	int		idx;

	idx = ft_strchr(node->buffer, '\n');
	if (idx || (!idx && node->buffer[0] == '\n'))
	{
		result = ft_strdup(node->buffer, idx + 1);
		node->buffer += (idx + 1);
		return (result);
	}
	idx = read(node->fd, node->temp, BUFFER_SIZE);
	if (idx <= 0)
	{
		if (node->buffer[0] == '\0')
			return (NULL);
		result = ft_strdup(node->buffer, ft_strlen(node->buffer));
		node->buffer += (ft_strlen(node->buffer));
		return (result);
	}
	node->temp[idx] = '\0';
	node->buffer = ft_strjoin(node->buffer, node->temp);
	free(node->buffer_for_free);
	node->buffer_for_free = node->buffer;
	return (find_enter_in(node));
}

char	*get_next_line(int fd)
{
	static t_list	**list;
	t_list			*new_node;
	char			*result;

	if (BUFFER_SIZE == 0)
		return (NULL);
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
	result = find_enter_in(new_node);
	if (new_node->buffer[0] == '\0')
		del_one(&list, new_node);
	return (result);
}
