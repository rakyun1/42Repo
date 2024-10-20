/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:36:51 by rakim             #+#    #+#             */
/*   Updated: 2024/07/16 21:17:46 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_READ_H
# define FT_FILE_READ_H

# include "ft.h"
# include "ft_write_error.h"
# include<unistd.h>
# include<fcntl.h>
# include<string.h>
# include<libgen.h>
# include<errno.h>
# include<stdlib.h>

void	do_read_without_opt(char *total_buffer, int total_bytes, char *buffer);

void	do_read_with_opt(char *t_buffer, int t_bytes, char *buffer, int r_byte);

void	read_file(int fd, int read_byte, char *prog_name, char *input);

void	print_tail(char **input, int length, int read_byte, int idx);

void	handle_option(int read_byte, char **input, int length);

#endif
