/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 12:50:24 by migferna          #+#    #+#             */
/*   Updated: 2021/03/26 15:38:22 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*list;

	if (!lst)
		return (NULL);
	list = ft_lstnew(f(lst->content));
	head = list;
	while (lst->next)
	{
		lst = lst->next;
		list->next = ft_lstnew(f(lst->content));
		if (!list->next)
		{
			del(list->next);
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (head);
}
