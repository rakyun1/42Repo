/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:39:14 by rakim             #+#    #+#             */
/*   Updated: 2024/10/05 14:54:15 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_strlen(const char *input)
{
	int	idx;

	idx = 0;
	while (input[idx])
		idx++;
	return (idx);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	little_idx;
	size_t	big_idx;

	if (little[0] == '\0')
		return ((char *)big);
	little_len = get_strlen(little);
	if (little_len > len)
		return (NULL);
	little_idx = 0;
	big_idx = 0;
	while (big[big_idx] && big_idx < len && little[little_idx])
	{
		if (little[little_idx++] != big[big_idx++])
			little_idx = 0;
	}
	if (little_idx == little_len)
		return ((char *)(big + (big_idx - little_idx)));
	return (NULL);
}
