/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 22:13:32 by rakim             #+#    #+#             */
/*   Updated: 2024/06/30 18:57:55 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);
void	do_second(char first1, char first2);
void	print(char first1, char first2, char second1, char second2);

int main(void)
{
	ft_print_comb2();
	return 0;
}

void	ft_print_comb2(void)
{
	char	first1;
	char	first2;

	first1 = '0';
	first2 = '0';
	while (first1 <= '9')
	{
		while (first2 <= '9')
		{
			if (first1 == '9' && first2 == '9')
			{
				break ;
			}
			do_second(first1, first2);
			first2++;
		}
		first1++;
		first2 = '0';
	}
}

void	do_second(char first1, char first2)
{
	char	second1;
	char	second2;	

	second1 = first1;
	second2 = first2 + 1;
	while (second1 <= '9')
	{
		while (second2 <= '9')
		{
			print(first1, first2, second1, second2);
			second2++;
		}
		second1++;
		second2 = '0';
	}
}

void	print(char first1, char first2, char second1, char second2)
{
	char	*comma;
	char	*space;

	space = " ";
	comma = ", ";
	write(1, &first1, 1);
	write(1, &first2, 1);
	write(1, space, 1);
	write(1, &second1, 1);
	write(1, &second2, 1);
	if (first1 != '9' || first2 != '8' || second1 != '9' || second2 != '9')
	{
		write(1, comma, 2);
	}
}
