/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:56:39 by rakim             #+#    #+#             */
/*   Updated: 2024/07/04 11:32:16 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] && s2[idx])
	{
		if (s1[idx] == s2[idx])
			idx ++;
		else
			break ;
	}
	if (s1[idx] == s2[idx] && s1[idx] == '\0')
		return (0);
	else
	{
		if (s1[idx] > s2[idx])
			return (1);
		else
			return (-1);
	}
}
