/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:11:07 by rakim             #+#    #+#             */
/*   Updated: 2024/07/05 11:15:31 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	result;
	int	idx;

	idx = 0;
	result = 1;
	while (str[idx] != '\0')
	{
		if (str[idx] < 'A' || str[idx] > 'z')
		{
			result = 0;
			break ;
		}
		if (str[idx] > 'Z' && str[idx] < 'a')
		{
			result = 0;
			break ;
		}
		idx++;
	}
	return (result);
}
