/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:16:06 by migferna          #+#    #+#             */
/*   Updated: 2019/11/05 13:18:53 by migferna         ###   ########.fr       */
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
		printf("Menor");
		while (len-- > 0)
			pdst[len] = psrc[len];
	}
	else
	{
		printf("Mayor");
		while (i < len)
			pdst[i] = psrc[i];
	}
	return (pdst);
}
