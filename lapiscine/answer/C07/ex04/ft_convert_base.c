/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:40:56 by rakim             #+#    #+#             */
/*   Updated: 2024/07/14 10:11:27 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char	*nbr_to_base(int nbr, char *base, int base_len);

char	*move_pointer(char *str, int *minus)
{
	while (str[0] == ' ' || (str[0] >= 9 && str[0] <= 13))
		str++;
	while (str[0] == '-' || str[0] == '+')
	{	
		if (str[0] == '-')
			*minus *= -1;
		str++;
	}
	return (str);
}

int	atoi_base(char *str, char *base, int base_len)
{
	int	str_idx;
	int	base_idx;
	int	result;
	int	minus;

	str_idx = 0;
	base_idx = 0;
	result = 0;
	minus = 1;
	str = move_pointer(str, &minus);
	while (str[str_idx])
	{
		base_idx = -1;
		while (base[++base_idx])
		{
			if (str[str_idx] == base[base_idx])
				break ;
		}
		if (!base[base_idx])
			break ;
		result *= base_len;
		result += base_idx;
		str_idx++;
	}
	return (minus * result);
}

int	check_base(char *base)
{
	int		ascii[127];
	int		idx;

	idx = 0;
	while (idx < 127)
		ascii[idx++] = 0;
	idx = 0;
	while (base[idx] != '\0')
	{
		if ((base[idx] == '+') || (base[idx] == '-'))
			return (0);
		else if (base[idx] == ' ' || (base[idx] >= 9 && base[idx] <= 13))
			return (0);
		else if (ascii[(int) base[idx]] == 1)
			return (0);
		else
			ascii[(int) base[idx]] = 1;
		idx++;
	}
	if (idx == 0 || idx == 1)
		return (0);
	return (idx);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	from_len;
	int	to_len;
	int	nbr_int;

	from_len = check_base(base_from);
	if (!from_len)
		return (NULL);
	to_len = check_base(base_to);
	if (!to_len)
		return (NULL);
	nbr_int = atoi_base(nbr, base_from, from_len);
	return (nbr_to_base(nbr_int, base_to, to_len));
}


int	main(void)
{
	char *nbr = "ab21";
	char *base_from = "0123456789abcdef";
	char *base_to = "01";
	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	return 0;
}
