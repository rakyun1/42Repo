/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:23:44 by rakim             #+#    #+#             */
/*   Updated: 2024/07/18 13:34:44 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	idx;

	idx = 0;
	while (idx + 1 < length)
	{
		if (f(tab[idx], tab[idx + 1]) > 0)
			return (0);
		idx++;
	}
	return (1);
}

//#include<stdio.h>
//int ascending(int a, int b) {
//    return (a - b);
//}
//
//int descending(int a, int b) {
//    return (b - a);
//}
//
//int main() {
//    int sorted_tab_asc[] = {1, 2, 3, 4, 5};
//    int unsorted_tab[] = {3, 1, 4, 2, 5};
//    int sorted_tab_desc[] = {5, 4, 3, 2, 1};
//    int length = 5;
//
//    int result_asc = ft_is_sort(sorted_tab_asc, length, &ascending);
//    printf("Ascending sorted array test: %d (expected 1)\n", result_asc);
//
//    int result_unsorted = ft_is_sort(unsorted_tab, length, &ascending);
//    printf("Unsorted array test: %d (expected 0)\n", result_unsorted);
//
//    int result_desc = ft_is_sort(sorted_tab_desc, length, &descending);
//    printf("Descending sorted array test: %d (expected 1)\n", result_desc);
//
//    if (result_asc == 1 && result_unsorted == 0 && result_desc == 1) {
//        printf("All tests passed!\n");
//    } else {
//        printf("Some tests failed.\n");
//    }
//
//    return 0;
//}
