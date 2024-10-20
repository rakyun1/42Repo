/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:29:44 by rakim             #+#    #+#             */
/*   Updated: 2024/07/07 15:36:15 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	str_idx;
	int	find_idx;

	str_idx = 0;
	find_idx = 0;
	if (!str[str_idx] && !to_find[str_idx])
		return (str);
	if (!str[str_idx])
		return (0);
	while (str[str_idx])
	{
		while (to_find[find_idx])
		{
			if (str[str_idx++] != to_find[find_idx])
				break ;
			find_idx++;
		}
		if (!to_find[find_idx])
			return (str + (str_idx - find_idx));
		find_idx = 0;
	}
	return (0);
}
