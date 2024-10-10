/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:26:37 by rakim             #+#    #+#             */
/*   Updated: 2024/10/06 12:42:02 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//size_t  ft_strlen(const char *s)
//{
//        size_t  length;
//
//        length = 0;
//        while (s[length] != '\0')
//                length++;
//        return (length);
//}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*result;
	size_t	idx;

	len = ft_strlen(s);
	idx = 0;
	result = (char *)malloc(len);
	if (result == NULL)
		return (NULL);
	while (s[idx] && idx < len)
	{
		result[idx] = s[idx];
		idx++;
	}
	return (result);
}
