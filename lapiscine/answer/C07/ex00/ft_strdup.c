/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:16:00 by rakim             #+#    #+#             */
/*   Updated: 2024/07/11 16:01:45 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*copy;
	int		idx;

	size = ft_strlen(src);
	copy = (char *)malloc(size);
	idx = 0;
	while (src[idx])
	{
		copy[idx] = src[idx];
		idx++;
	}
	copy[idx] = '\0';
	return (copy);
}
