/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:04:04 by rakim             #+#    #+#             */
/*   Updated: 2024/10/04 15:52:31 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			idx;

	if (n == 0)
		return (NULL);
	temp = (unsigned char *)s;
	idx = 0;
	while (temp[idx] && idx < n)
	{
		if (temp[idx] == (unsigned char)c)
			return ((void *)(temp + idx));
		else
			idx++;
	}
	return (NULL);
}
