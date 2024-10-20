/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:13:41 by rakim             #+#    #+#             */
/*   Updated: 2024/07/02 20:17:58 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	idx;
	int	result;

	idx = 0;
	result = 1;
	while (str[idx])
	{
		if (str[idx] > 'Z' || str[idx] < 'A')
		{
			result = 0;
			break ;
		}
		idx++;
	}
	return (result);
}
