/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:29:25 by rakim             #+#    #+#             */
/*   Updated: 2024/07/13 19:26:54 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par)
{
	int		par_size;
	int		str_len;
	char	temp;

	par_size = 0;
	while (par[par_size].str)
	{
		temp = par[par_size].size + '0';
		str_len = 0;
		while (par[par_size].str[str_len])
			str_len++;
		write(1, par[par_size].str, str_len);
		write(1, "\n", 1);
		write(1, &temp, 1);
		write(1, "\n", 1);
		write(1, par[par_size].copy, str_len);
		write(1, "\n", 1);
		par_size++;
	}
}
