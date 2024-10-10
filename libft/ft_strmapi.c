/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:16:29 by rakim             #+#    #+#             */
/*   Updated: 2024/10/08 19:11:47 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			s_len;
	unsigned int	s_idx;
	char			*result;

	s_len = ft_strlen(s);
	result = (char *)malloc(s_len + 1);
	if (result == NULL)
		return (NULL);
	s_idx = 0;
	while (s[s_idx])
	{
		result[s_idx] = f(s_idx, s[s_idx]);
		s_idx++;
	}
	return (result);
}
