/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 11:40:27 by migferna          #+#    #+#             */
/*   Updated: 2021/03/26 15:36:13 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*it;
	t_list	*tmp;

	tmp = NULL;
	it = *lst;
	while (it)
	{
		tmp = it->next;
		del(it->content);
		free(it);
		it = tmp;
	}
	*lst = NULL;
}
