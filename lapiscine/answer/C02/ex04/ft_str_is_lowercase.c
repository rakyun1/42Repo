/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:07:36 by rakim             #+#    #+#             */
/*   Updated: 2024/07/02 20:13:05 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	idx;
	int	result;

	idx = 0;
	result = 1;
	while (str[idx])
	{
		if (str[idx] < 'a' || str[idx] > 'z')
		{
			result = 0;
			break ;
		}
		idx++;
	}
	return (result);
}
