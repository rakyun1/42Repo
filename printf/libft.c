/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:50:07 by rakim             #+#    #+#             */
/*   Updated: 2024/11/01 15:21:59 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(long n, int fd, int *result)
{
	char	temp;

	if (n == 0)
	{
		(*result) += write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		(*result) += write(fd, "-", 1);
		ft_putnbr_fd(-n, fd, result);
		return ;
	}
	else if (n / 10 > 0)
		ft_putnbr_fd(n / 10, fd, result);
	temp = n % 10 + '0';
	(*result) += write(fd, &temp, 1);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_idx;
	size_t	dst_idx;

	src_idx = 0;
	dst_idx = 0;
	if (size > 0)
	{
		while (src[src_idx] != '\0' && src_idx < size - 1)
			dst[dst_idx++] = src[src_idx++];
		dst[dst_idx] = '\0';
	}
	while (src[src_idx] != '\0')
		src_idx++;
	return (src_idx);
}

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
