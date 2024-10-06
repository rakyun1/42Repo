/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:52:00 by rakim             #+#    #+#             */
/*   Updated: 2024/10/06 19:49:00 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_t;
	unsigned char	*s2_t;
	size_t			idx;

	s1_t = (unsigned char *)s1;
	s2_t = (unsigned char *)s2;
	idx = 0;
	if (n == 0)
		return (0);
	while (idx < n)
	{
		if (s1_t[idx] != s2_t[idx])
			return (s1_t[idx] - s2_t[idx]);
		else
			idx++;
	}
	return (0);
}
