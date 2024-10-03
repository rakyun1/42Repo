/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:57:25 by rakim             #+#    #+#             */
/*   Updated: 2024/10/03 20:35:00 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_dst_len(char *dst)
{
	size_t	idx;

	while (dst[idx])
		idx++;
	return (idx);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_idx;
	size_t	src_idx;
	size_t	result;

	dst_idx = get_dst_len(dst);
	src_idx = 0;
	result = dst_idx;
	while (dst_idx < size && src[src_idx] != '\0')
		dst[dst_idx++] = src[src_idx++];
	dst[dst_idx] = '\0';
	return (result + src_idx);
}


#include <stdio.h>
#include <string.h>
int main() {
    char buffer[20] = "Hello, ";
    const char *src = "World!";
    
    size_t result = strlcat(buffer, src, sizeof(buffer));

    printf("결과 문자열: %s\n", buffer);
    printf("반환값: %zu\n", result);

    return 0;
}
