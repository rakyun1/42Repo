/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:09:09 by rakim             #+#    #+#             */
/*   Updated: 2024/11/12 17:32:13 by rakim            ###   ########.fr       */
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
	struct s_LL		*next;
	char			*buffer_for_free;
}	t_list;

char		*get_next_line(int fd);
size_t		ft_strlen(const char *s);
char		*ft_strjoin(char *origin, char *new);
char		*ft_strdup(const char *s);
char		*ft_strchr(const char *s, int c);

#endif