/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:36:25 by rakim             #+#    #+#             */
/*   Updated: 2024/10/03 17:39:32 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*src_temp;
	unsigned char	*dest_temp;

	src_temp = (unsigned char *)src;
	dest_temp = (unsigned char *)dest;
	if (dest < src)
	{
		idx = -1;
		while (++idx < n)
			dest_temp[idx] = src_temp[idx];
	}
	else
	{
		idx = n;
		while (idx > 0)
		{
			dest_temp[idx - 1] = src_temp[idx - 1];
			idx--;
		}
	}
	return (dest);
}
