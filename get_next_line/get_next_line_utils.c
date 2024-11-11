/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:11:44 by rakim             #+#    #+#             */
/*   Updated: 2024/11/11 17:32:55 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0' || s[length] != '\n')
		length++;
	return (length);
}

char	*ft_realloc(char *buffer, long size)
{
	free(buffer);
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	if (buffer == NULL)
		return (NULL);
	buffer[size] = '\0';
	return (buffer);
}

char	*ft_strjoin(char const *origin, char const *new)
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
	while (new[original_idx] != '\n')
		result[result_idx++] = new[original_idx++];
	result[result_idx] = '\0';
	free(origin);
	return (result);
}
