/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:11:44 by rakim             #+#    #+#             */
/*   Updated: 2024/11/14 17:06:03 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

void	ft_strjoin(t_list *node)
{
	size_t	origin_len;
	size_t	new_len;
	char	*result;
	int		result_idx;
	int		original_idx;

	origin_len = ft_strlen(node->buffer);
	new_len = ft_strlen(node->temp);
	result = (char *)malloc(origin_len + new_len + 1);
	if (result == NULL)
	{
		node->buffer = NULL;
		return ;
	}
	result_idx = 0;
	original_idx = 0;
	while (node->buffer[original_idx])
		result[result_idx++] = node->buffer[original_idx++];
	original_idx = 0;
	while (node->temp[original_idx] != '\0')
		result[result_idx++] = node->temp[original_idx++];
	result[result_idx] = '\0';
	node->buffer = result;
	free(node->buffer_for_free);
	node->buffer_for_free = node->buffer;
}

char	*ft_strdup(const char *s, int enter_place)
{
	char	*result;
	int		idx;

	result = (char *)malloc((enter_place + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	idx = 0;
	while (idx < enter_place)
	{
		result[idx] = s[idx];
		idx++;
	}
	result[idx] = '\0';
	return (result);
}

int	ft_strchr(const char *s, int c)
{
	int	idx;
	int	s_len;

	idx = 0;
	s_len = ft_strlen(s);
	while (idx < s_len)
	{
		if (s[idx] == (char)c)
			return (idx);
		idx++;
	}
	if (s[idx] == (char)c)
		return (idx);
	return (0);
}

void	del_one(t_list ***list, t_list *target)
{
	t_list	*temp;

	if (!list || !target)
		return ;
	free(target->buffer_for_free);
	if ((**list)->fd == target->fd)
	{
		**list = target->next;
		free(target);
		if (**list == NULL)
		{
			free(*list);
			*list = NULL;
		}
		return ;
	}
	temp = **list;
	while (temp->next->fd != target->fd)
		temp = temp->next;
	temp->next = target->next;
	free(target);
	target = NULL;
}
