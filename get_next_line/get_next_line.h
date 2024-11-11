/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:09:09 by rakim             #+#    #+#             */
/*   Updated: 2024/11/11 16:54:49 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H 

# include <unistd.h>
# include <stdlib.h>

typedef struct s_LL
{
	int				fd;
	char			*buffer;
	int				count;
	struct s_LL		*next;
}	t_list;

char		*get_next_line(int fd);
int			find_fd_in(t_list *list, int fd);
char		*ft_strchr(const char *s, int c);
char		*ft_realloc(char *buffer, long size);
size_t		ft_strlen(const char *s);

#endif