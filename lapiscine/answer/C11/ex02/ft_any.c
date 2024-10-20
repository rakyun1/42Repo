/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:39:33 by rakim             #+#    #+#             */
/*   Updated: 2024/07/18 13:19:22 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	idx;

	idx = 0;
	while (tab[idx])
	{
		if (f(tab[idx]) != 0)
			return (1);
		idx++;
	}
	return (0);
}
