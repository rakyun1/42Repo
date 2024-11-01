/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:41:16 by rakim             #+#    #+#             */
/*   Updated: 2024/10/29 15:08:48by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

# define STDOUT 1

void	ft_putnbr_fd(long n, int fd, int *result);
int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	print_in_uppercase_hexadecimal(unsigned int arg, int *result);
void	print_in_lowercase_hexadecimal(unsigned int arg, int *result);
void	print_address_hexadecimal(unsigned long num, int *result);

#endif