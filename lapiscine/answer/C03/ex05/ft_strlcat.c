/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:29:19 by rakim             #+#    #+#             */
/*   Updated: 2024/07/06 20:00:41 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlen_custom(char *input)
{
	unsigned int	length;

	length = 0;
	while (input[length])
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		len_src;
	unsigned int		len_dst;
	unsigned int		idx;

	len_src = strlen_custom(src);
	len_dst = strlen_custom(dest);
	idx = 0;
	if (len_dst >= size)
		return (len_src + size);
	while (src[idx] && len_dst + idx + 1 < size)
	{
		dest[len_dst + idx] = src[idx];
		idx++;
	}
	dest[len_dst + idx] = '\0';
	return (len_dst + len_src);
}
