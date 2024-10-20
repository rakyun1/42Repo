/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:42:30 by rakim             #+#    #+#             */
/*   Updated: 2024/07/04 20:00:46 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;

	idx = 0;
	if (!dest ||!src)
		return (0);
	while (src[idx] && idx < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (idx);
}
