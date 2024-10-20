/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:16:18 by rakim             #+#    #+#             */
/*   Updated: 2024/07/18 13:23:12 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;
	int	idx;

	count = 0;
	idx = 0;
	while (idx < length)
	{
		if (f(tab[idx]) != 0)
			count++;
		idx++;
	}
	return (count);
}

//
//int is_upper(char *str) {
//    while (*str) {
//        if (*str >= 'A' && *str <= 'Z')
//            return 1;
//        str++;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main() {
//    char *tab[] = {"abc", "Def", "ghi", "JKL", "mno", NULL};
//    int length = 5; 
//
//    int result = ft_count_if(tab, length, &is_upper);
//
//    printf("Number of elements with uppercase letters: %d\n", result);
//
//    if (result == 2) {
//        printf("Test passed!\n");
//    } else {
//        printf("Test failed!\n");
//    }
//
//    return 0;
//}
