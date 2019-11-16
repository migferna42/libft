/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 11:40:27 by migferna          #+#    #+#             */
/*   Updated: 2019/11/16 11:18:55 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *it;
	t_list *tmp;

	it = *lst;
	tmp = NULL;
	if (!(lst || *lst))
		return;
	while (it)
	{
		if (it->next)
			tmp = it->next;
		else
			tmp = NULL;
		del(it->content);
		free(it);
		it = tmp;
	}
}
