/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:55:28 by rakim             #+#    #+#             */
/*   Updated: 2024/07/07 15:40:44 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		current_idx;

	current_idx = 0;
	if (!s1[current_idx] && !s2[current_idx])
		return (0);
	while (n > current_idx && (s1[current_idx] || s2[current_idx]))
	{
		if (s1[current_idx] != s2[current_idx])
		{
			return (s1[current_idx] - s2[current_idx]);
		}
		current_idx++;
	}
	return (0);
}
