/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:45:12 by rakim             #+#    #+#             */
/*   Updated: 2024/07/07 22:33:26 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	recursive(int nbr, char *base, int base_len)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		recursive(nbr / base_len, base, base_len);
	write(1, &base[nbr % base_len], 1);
}

void	use_base(int nbr, char *base, int base_len)
{
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		recursive(-(nbr / base_len), base, base_len);
		write(1, &base[-(nbr % base_len)], 1);
	}
	else
		recursive(nbr, base, base_len);
}

void	check_base(int nbr, char *base)
{
	int	idx;
	int	idx2;

	idx = 0;
	if (!*base || base[1] == '\0')
		return ;
	while (base[idx])
	{
		idx2 = idx + 1;
		if (base[idx] == '+' || base[idx] == '-')
			return ;
		while (base[idx2])
		{
			if (base[idx] == base[idx2])
				return ;
			idx2++;
		}
		idx++;
	}
	use_base(nbr, base, idx);
}

void	ft_putnbr_base(int nbr, char *base)
{
	check_base(nbr, base);
}
