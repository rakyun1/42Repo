/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:23:01 by rakim             #+#    #+#             */
/*   Updated: 2024/06/30 19:51:17 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb);
void	print(int len, char *buffer);
int		do_exception(int nb);
void	do_correct(char *buffer, int nb, int len, int sign);


int		main(void)
{
	ft_putnbr(12312312);
	return 0;
}

void	ft_putnbr(int nb)
{
	char	buffer[20];
	int		len;
	int		sign;

	if (do_exception(nb) != 1)
	{
		len = 0;
		sign = 1;
		do_correct(buffer, nb, len, sign);
	}
}

void	print(int len, char *buffer)
{
	while (len > 0)
	{
		len--;
		write(1, &buffer[len], 1);
	}
}

int		do_exception(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return 1;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return 1;	
	}

	return 0;
}

void	do_correct(char *buffer, int nb, int len, int sign)
{
	if (nb < 0)
	{
		sign = -1;
		nb = -nb;
	}
	while (nb > 0)
	{
		buffer[len++] = '0' + nb % 10;
		nb /= 10;
	}
	if (sign == -1)
	{
		buffer[len++] = '-';
	}
	print(len, buffer);
}

