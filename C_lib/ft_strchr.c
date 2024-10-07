/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:19:35 by rakim             #+#    #+#             */
/*   Updated: 2024/10/07 18:45:57 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	idx;
	int	s_len;

	idx = 0;
	s_len = ft_strlen(s) + 1;
	while (idx < s_len)
	{
		if (s[idx] == c)
			return ((char *)(s + idx));
		else
			idx++;
	}
	return (0);
}
