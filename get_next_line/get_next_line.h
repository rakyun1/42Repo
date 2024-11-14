/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:09:09 by rakim             #+#    #+#             */
/*   Updated: 2024/11/14 17:00:56 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H 

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_LL
{
	int				fd;
	char			temp[BUFFER_SIZE + 1];
	char			*buffer;
	struct s_LL		*next;
	char			*buffer_for_free;
}	t_list;

char		*get_next_line(int fd);
int			ft_strlen(const char *s);
void		ft_strjoin(t_list *node);
char		*ft_strdup(const char *s, int enter_place);
int			ft_strchr(const char *s, int c);
void		del_one(t_list ***list, t_list *target);

#endif