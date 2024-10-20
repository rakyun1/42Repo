/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:03:04 by rakim             #+#    #+#             */
/*   Updated: 2024/07/18 15:58:35 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft.h"

void	calculate(int first, int second, char *operator)
{
	if (operator[0] == '+')
		ft_putnbr(first + second);
	if (operator[0] == '-')
		ft_putnbr(first - second);
	if (operator[0] == '*')
		ft_putnbr(first * second);
	if (operator[0] == '/')
		ft_putnbr(first / second);
	if (operator[0] == '%')
		ft_putnbr(first % second);
}

int	is_operator(char *operator)
{
	int	idx;

	idx = 0;
	while (operator[idx])
		idx++;
	if (idx > 1)
		return (0);
	if (operator[0] == '+')
		return (1);
	if (operator[0] == '-')
		return (1);
	if (operator[0] == '/')
		return (1);
	if (operator[0] == '*')
		return (1);
	if (operator[0] == '%')
		return (1);
	return (0);
}

int	validate_input(int length, char **input)
{
	if (length != 4)
		return (-1);
	if (is_operator(input[2]) == 0)
	{
		write(1, "0\n", 2);
		return (-1);
	}
	return (1);
}

int	main(int length, char *input[])
{
	int	first;
	int	second;

	if (validate_input(length, input) < 0)
		return (1);
	first = ft_atoi(input[1]);
	second = ft_atoi(input[3]);
	if (input[2][0] == '/' && second == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (input[2][0] == '%' && second == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
		calculate(first, second, input[2]);
	return (0);
}
