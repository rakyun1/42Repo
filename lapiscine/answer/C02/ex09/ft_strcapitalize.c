/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 22:19:03 by rakim             #+#    #+#             */
/*   Updated: 2024/07/04 20:10:59 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_alphanumeric(char c)
{
	return (is_number(c) || is_uppercase(c) || is_lowercase(c));
}

char	*ft_strcapitalize(char *str)
{
	int	idx;

	idx = 0;
	if (is_lowercase(str[idx]))
		str[idx++] -= 32;
	while (str[idx])
	{
		if (!is_alphanumeric(str[idx]) && is_lowercase(str[idx + 1]))
			str[++idx] -= 32;
		else if (is_uppercase(str[idx]))
			str[idx] += 32;
		idx++;
	}
	return (str);
}
