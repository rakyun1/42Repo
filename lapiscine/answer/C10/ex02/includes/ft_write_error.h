/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_error.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:28:31 by rakim             #+#    #+#             */
/*   Updated: 2024/07/16 21:15:36 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WRITE_ERROR_H
# define FT_WRITE_ERROR_H
# include"ft.h"
# include<errno.h>
# include<fcntl.h>
# include<libgen.h>
# include<stdlib.h>
# include<unistd.h>
# include<string.h>

void	write_error(char *prog_name, char *input);
void	write_invalid_number(char *arg, char *prog_name);

#endif
