/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:06:48 by rakim             #+#    #+#             */
/*   Updated: 2024/10/06 19:28:20 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*t_dest;
	unsigned char	*t_src;

	idx = -1;
	t_dest = (unsigned char *)dest;
	t_src = (unsigned char *)src;
	while (++idx < n)
		t_dest[idx] = t_src[idx];
	return (dest);
}
