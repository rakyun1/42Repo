/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:27:03 by rakim             #+#    #+#             */
/*   Updated: 2024/07/16 21:15:05 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_write_error.h"

void	write_error(char *prog_name, char *input)
{
	write (STDERR_FILENO, prog_name, len(prog_name));
	write (STDERR_FILENO, ": ", 2);
	write (STDERR_FILENO, input, len(input));
	write (STDERR_FILENO, ": ", 2);
	write (STDERR_FILENO, strerror(errno), len(strerror(errno)));
	write (STDERR_FILENO, "\n", 1);
}

void	write_invalid_number(char *arg, char *prog_name)
{
	write(STDERR_FILENO, prog_name, len(prog_name));
	write(STDERR_FILENO, ": invalid number of bytes: ‘", 30);
	write(STDERR_FILENO, arg, len(arg));
	write(STDERR_FILENO, "’\n", 4);
}
