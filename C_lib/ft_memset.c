/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:12:43 by rakim             #+#    #+#             */
/*   Updated: 2024/10/02 16:12:31 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

// n을 넘어서 값을 추가할 경우 원래 memset()은 출력할 때 딱 n 값까지만 출력되는데,
// ft_memset()은 그 이후의 값이 출력된다.
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			idx;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	idx = 0;
	while (idx < n)
		ptr[idx++] = (unsigned char)c;
	return (s);
}
