/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:27:26 by rakim             #+#    #+#             */
/*   Updated: 2024/07/04 20:24:35 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	idx;

	idx = 0;
	while (n > 0 && src[idx] != '\0')
	{
		n--;
		dest[idx] = src[idx];
		idx++;
	}
	while (n > 0)
	{
		dest[idx++] = '\0';
		n--;
	}
	return (dest);
}
