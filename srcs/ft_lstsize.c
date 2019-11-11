/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:51:35 by migferna          #+#    #+#             */
/*   Updated: 2019/11/11 15:30:10 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int size;
	t_list *ptr;
	
	size = 0;
	ptr = lst;
	while (ptr)
	{
		ptr = lst->next;
		size++;
	}
	return (size);
}
