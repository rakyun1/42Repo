/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:53:12 by rakim             #+#    #+#             */
/*   Updated: 2024/07/14 13:30:54 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
		{
			return (1);
		}
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_in_charset(*str, charset))
			in_word = 0;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src, int n)
{
	int		i;
	char	*dest;

	dest = (char *)malloc((n + 1) * sizeof(char));
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	int		word_len;
	char	**result;
	int		index;

	words = count_words(str, charset);
	result = (char **)malloc((words + 1) * sizeof(char *));
	index = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			word_len = 0;
			while (str[word_len] && !is_in_charset(str[word_len], charset))
				word_len++;
			result[index++] = ft_strdup(str, word_len);
			str += word_len;
		}
		else
		{
			str++;
		}
	}
	result[index] = NULL;
	return (result);
}

/*
int main() {
    char str[] = "hello wo.rld pro/gram";
    char charset[] = " ./";
    char **split = ft_split(str, charset);
    for (int i = 0; split[i] != NULL; i++) {
        printf("split[%d] = %s\n", i, split[i]);
        free(split[i]);
    }
    free(split);
    return 0;
}
*/
