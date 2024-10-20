/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:45:46 by rakim             #+#    #+#             */
/*   Updated: 2024/06/30 18:49:09 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void);
void	do_while(char first, char second, char third);
void	print(char first, char second, char third);

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '0';
	third = '0';
	do_while(first, second, third);
}

void	do_while(char first, char second, char third)
{
	while (first <= '7')
	{
		while (second <= '8')
		{
			if (first != second)
			{
				while (third <= '9')
				{
					if (first != third && third != second)
					{
						print(first, second, third);
					}
					third++;
				}
			}
			third = second + 1;
			second++;
		}
		second = first + 1;
		first++;
	}
}

void	print(char first, char second, char third)
{	
	char	*newline;

	newline = ", ";
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	if (first != '7')
	{
		write(1, newline, 2);
	}
}
