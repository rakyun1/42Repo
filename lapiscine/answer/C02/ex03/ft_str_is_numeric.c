/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:34:45 by rakim             #+#    #+#             */
/*   Updated: 2024/07/02 20:06:21 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	idx;
	int	result;

	idx = 0;
	result = 1;
	while (str[idx])
	{
		if (str[idx] < '0' || str[idx] > '9')
		{
			result = 0;
			break ;
		}
		idx++;
	}
	return (result);
}
