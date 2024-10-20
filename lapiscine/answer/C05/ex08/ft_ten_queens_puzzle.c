/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:20:42 by rakim             #+#    #+#             */
/*   Updated: 2024/07/11 10:25:53 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

#include<stdio.h>
void	print_graph(int graph[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}
}

void	write_position(int answer[10][10])
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (answer[i][j] == 1)
			{
				temp = j + '0';
				write(1, &temp, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

void	set_no_entry_zone(int graph[10][10], int y, int x, int i)
{
	int	y_d;
	int	x_d;
	int	x_d_m;

	y_d = y + 1;
	x_d_m = x - 1;
	x_d = x + 1;
	while (i < 10)
	{
		if (graph[i][x] == 0)
			graph[i][x] = 2;
		if (y_d < 10 && x_d < 10)
			graph[y_d][x_d] = 2;
		if (y_d < 10 && x_d_m >= 0)
			graph[y_d][x_d_m] = 2;
		y_d++;
		x_d++;
		x_d_m--;
		i++;
	}
}

void	copy_graph(int copy[10][10], int graph[10][10])
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			copy[y][x] = graph[y][x];
			x++;
		}
		y++;
	}
}

void	back_tracking(int graph[10][10], int y, int x, int *count)
{
	int	copy[10][10];
	print_graph(graph);

	if (y == 10)
	{
		*count += 1;
		write_position(graph);
		return ;
	}
	x = 0;
	while (x < 10)
	{

		if (graph[y][x] == 0)
		{
			graph[y][x] = 1;
			copy_graph(copy, graph);
			set_no_entry_zone(copy, y, x, y + 1);
			back_tracking(copy, y + 1, 0, count);
			graph[y][x] = 0;
		}
		x++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	graph[10][10];
	int	y;
	int	x;
	int	count;

	y = 0;
	x = 0;
	count = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			graph[y][x] = 0;
			x++;
		}
		y++;
	}
	back_tracking(graph, 0, 0, &count);
	return (count);
}

int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}
