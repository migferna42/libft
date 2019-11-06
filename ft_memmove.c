/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:16:06 by migferna          #+#    #+#             */
/*   Updated: 2019/11/06 08:09:19 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (psrc < pdst)
	{
		while (len-- > 0)
			pdst[len] = psrc[len];
	}
	else
	{
		while (i < len)
			pdst[i] = psrc[i];
	}
	return (pdst);
}
