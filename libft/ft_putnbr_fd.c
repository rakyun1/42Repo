/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:50:07 by rakim             #+#    #+#             */
/*   Updated: 2024/10/08 19:53:18 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	int		idx;

	str = ft_itoa(n);
	idx = 0;
	while (str[idx])
	{
		write(fd, &str[idx], 1);
		idx++;
	}
}
