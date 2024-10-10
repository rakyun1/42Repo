/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:52:36 by rakim             #+#    #+#             */
/*   Updated: 2024/10/07 19:23:36 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	result_idx;

	if (s == NULL)
		return (NULL);
	result = (char *)malloc(len);
	if (result == NULL)
		return (NULL);
	result_idx = 0;
	while (s[start] && result_idx < len)
		result[result_idx++] = s[start++];
	result[result_idx] = '\0';
	return (result);
}
