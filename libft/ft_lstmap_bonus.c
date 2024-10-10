/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakim <fkrdbs234@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:05:13 by rakim             #+#    #+#             */
/*   Updated: 2024/10/09 20:36:31 by rakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	free_all(t_list *new_lst, void (*del)(void *))
{
	t_list	*temp;

	while (new_lst)
	{
		temp = new_lst;
		new_lst = new_lst->next;
		del(temp->content);
		free(temp);
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current_node;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			free_all(new_lst, del);
			return (NULL);
		}
		new_node->next = NULL;
		if (!new_lst)
			new_lst = new_node;
		else
			current_node->next = new_node;
		current_node = new_node;
		lst = lst->next;
	}
	return (new_lst);
}
