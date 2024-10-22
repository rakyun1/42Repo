/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <rakim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:39:14 by rakim             #+#    #+#             */
/*   Updated: 2024/10/22 23:51:22 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	little_idx;
	size_t	big_idx;
	size_t	temp;

	if (little[0] == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	if (little_len > len || !big)
		return (NULL);
	little_idx = 0;
	big_idx = 0;
	while (big_idx < len)
	{
		if (little[little_idx] == big[big_idx])
		{
			temp = big_idx;
			while (little[little_idx] && big[temp] && temp < len)
				if (little[little_idx++] != big[temp++])
					break ;
			if (little[little_idx - 1] == big[temp - 1] && \
			little_idx == little_len)
				break ;
			else
				little_idx = 0;
		}
		big_idx++;
	}
	if (little_idx == little_len)
		return ((char *)(&big[big_idx]));
	return (NULL);
}

int	main(void)
{
	printf("%s\n", ft_strnstr("", "xx", 4294967295));
}