/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:52:36 by rakim             #+#    #+#             */
/*   Updated: 2024/10/06 14:22:37 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	long			result_len;
	char			*result;
	unsigned int	result_idx;

	if (s == NULL)
		return (NULL);
	result_len = ((long)len - (long)start) + 1;
	result = (char *)malloc(result_len);
	if (result == NULL)
		return (NULL);
	result_idx = 0;
	while (s[start] && result_idx < result_len - 1)
		result[result_idx++] = s[start++];
	result[result_idx] = '\0';
	return (result);
}
