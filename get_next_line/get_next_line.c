/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <rakim@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:08:42 by rakim             #+#    #+#             */
/*   Updated: 2024/11/10 22:19:05 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
    int idx;
    static char buffer[BUFFER_SIZE];

    read(fd, buffer, BUFFER_SIZE);
    idx = 0;
    while (buffer[idx])
    {
        printf("%c", buffer[idx++]);
    }

	
    return NULL;
}