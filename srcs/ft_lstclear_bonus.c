/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 11:40:27 by migferna          #+#    #+#             */
/*   Updated: 2019/11/15 12:47:11 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ptr;

	ptr = *lst;
	while (ptr->next)
	{
		del(ptr->content);
		ptr = ptr->next;
		free(lst);
	}
	ptr = NULL;
}
