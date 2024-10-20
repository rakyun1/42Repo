/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:08:01 by rakim             #+#    #+#             */
/*   Updated: 2024/07/16 20:46:01 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

#include "ft_stock_str.h"

int	ft_strlen(char *input)
{
	int	idx;

	idx = 0;
	while (input[idx])
		idx++;
	return (idx);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			idx;

	arr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	idx = 0;
	while (idx < ac)
	{
		arr[idx].size = ft_strlen(av[idx]);
		arr[idx].str = av[idx];
		arr[idx].copy = (char *)malloc(arr[idx].size + 1);
		if (!arr[idx].copy)
		{
			while (--idx >= 0)
				free(arr[idx].copy);
			free(arr);
			return (NULL);
		}
		ft_strcpy(arr[idx].copy, av[idx]);
		idx++;
	}
	arr[ac].str = NULL;
	return (arr);
}

/*
#include"ft_stock_str.h"
void	ft_show_tab(t_stock_str *result);
int	main(int length, char **input)
{
.size =	t_stock_str *result;
	result = ft_strs_to_tab(length, input);
	ft_show_tab(result);
	return 0;
}
*/
