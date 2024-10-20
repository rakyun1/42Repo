/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:21:41 by rakim             #+#    #+#             */
/*   Updated: 2024/07/02 20:27:58 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	idx;
	int	result;

	idx = 0;
	result = 1;
	while (str[idx])
	{
		if (str[idx] < ' ' || str[idx] > '~')
		{
			result = 0;
			break ;
		}
		idx++;
	}
	return (result);
}
