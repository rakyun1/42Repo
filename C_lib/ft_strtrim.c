///* ************************************************************************** */
///*                                                                            */
///*                                                        :::      ::::::::   */
///*   ft_strtrim.c                                       :+:      :+:    :+:   */
///*                                                    +:+ +:+         +:+     */
///*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
///*                                                +#+#+#+#+#+   +#+           */
///*   Created: 2024/10/06 14:41:54 by rakim             #+#    #+#             */
///*   Updated: 2024/10/06 14:58:09 by rakim            ###   ########.fr       */
///*                                                                            */
///* ************************************************************************** */
//
//#include "libft.h"
//#include <stdlib.h>
//
//int	get_len(char const *s1, char const *set)
//{
//	int	set_idx;
//	int	result;
//
//	set_idx = 0;
//	result = 0;
//	while (s1[result])
//	{
//		if (s1[result] == set[set_idx])
//		{
//			while (s1[result] || set[set_idx])
//				if (s1[result++] != set[set_idx])
//					break ;
//			if (set[set_idx] == '\0')
//			{
//				result -= set_idx;
//				set_idx = 0;
//			}
//		}
//		else
//			result++;
//	}
//}
//
//char	*ft_strtrim(char const *s1, char const *set)
//{
//	int	result_len;
//
//	result_len = get_len(s1, set);
//}
//
//
//int	main(void)
//{
//	ft_strtrim("i eeam ee rakeeyun", "ee");
//	return 0;
//}