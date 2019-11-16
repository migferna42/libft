/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 12:50:24 by migferna          #+#    #+#             */
/*   Updated: 2019/11/16 17:12:10 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	t_list *head;
	t_list *it;

	if (!lst)
		return (NULL);
	it = f(lst->content);
	head = it;
	while (lst->next)
	{
		lst = lst->next;
		it->content = f(lst->content);
		it = it->next;
	}
	return (head);
}
