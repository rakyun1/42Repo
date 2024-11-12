/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:11:44 by rakim             #+#    #+#             */
/*   Updated: 2024/11/12 14:24:54 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

char	*ft_realloc(char *buffer, long size)
{
	free(buffer);
	buffer = (char *)malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

char	*ft_strjoin(char *origin, char *new)
{
	size_t	origin_len;
	size_t	new_len;
	char	*result;
	int		result_idx;
	int		original_idx;

	if (origin == NULL || new == NULL)
		return (NULL);
	origin_len = ft_strlen(origin);
	new_len = ft_strlen(new);
	result = (char *)malloc(origin_len + new_len + 1);
	if (result == NULL)
		return (NULL);
	result_idx = 0;
	original_idx = 0;
	while (origin[original_idx])
		result[result_idx++] = origin[original_idx++];
	original_idx = 0;
	while (new[original_idx] != '\0')
		result[result_idx++] = new[original_idx++];
	result[result_idx] = '\0';
	return (result);
}

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	idx;

	idx = 0;
	while (s[idx] != '\n')
		idx++;
	result = (char *)malloc((idx + 2) * sizeof(char));
	if (result == NULL)
		return (NULL);
	idx = 0;
	while (s[idx] != '\n')
	{
		result[idx] = s[idx];
		idx++;
	}
	result[idx++] = '\n';
	result[idx] = '\0';
	return (result);
}

char	*ft_strchr(const char *s, int c)
{
	int	idx;
	int	s_len;

	idx = 0;
	s_len = ft_strlen(s);
	while (idx < s_len)
	{
		if (s[idx] == (char)c)
			return ((char *)(s + idx));
		idx++;
	}
	if (s[idx] == (char)c)
		return ((char *)&s[idx]);
	return (0);
}