/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 12:50:24 by migferna          #+#    #+#             */
/*   Updated: 2019/11/16 15:37:08 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *it;
	
	if (!lst)
		return (NULL);
	it = ft_lstnew(NULL, 0);
	if (!it)
		del(it->content);
	while (lst)
	{
		it->content = f(lst->content);
		lst = lst->next;
		it = it->next;
	}
	return it;
}
