/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 09:38:56 by rakim             #+#    #+#             */
/*   Updated: 2024/07/11 14:29:01 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

char	*ft_strcat(char *dest, char *src)
{
	int		dest_idx;
	int		src_idx;

	dest_idx = 0;
	src_idx = 0;
	while (dest[dest_idx])
		dest_idx++;
	while (src[src_idx])
		dest[dest_idx++] = src[src_idx++];
	dest[dest_idx] = '\0';
	return (dest);
}

int	malloc_size_cal(int size, char **strs, char *sep)
{
	int	strs_len;
	int	sep_len;
	int	i;

	strs_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	if (size == 1)
		return (ft_strlen(strs[0]) + 1);
	while (i < size - 1)
	{
		strs_len += ft_strlen(strs[i]);
		strs_len += sep_len;
		++i;
	}
	strs_len += ft_strlen(strs[i]);
	return (strs_len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	int		i;
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(1);
		str[0] = 0;
		return (str);
	}
	total_length = malloc_size_cal(size, strs, sep);
	str = (char *)malloc(total_length * sizeof(char));
	i = 0;
	if (*(str + i) != 0)
		*(str + i) = 0;
	i = 0;
	while (i < (size - 1))
	{
		str = ft_strcat(str, *(strs + i));
		str = ft_strcat(str, sep);
		++i;
	}
	str = ft_strcat(str, *(strs + i));
	return (str);
}
/*
#include<stdio.h>
int	main(void)
{
	char *array[] = {
        "Hello",
        "World",
        "CProgram"
   	 };
	char sep[] = "--";
	char *result = ft_strjoin(3, array, sep);
	printf("%s\n", result);
	return (0);
}
*/
