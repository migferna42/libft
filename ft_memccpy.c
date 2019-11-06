/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:55:13 by migferna          #+#    #+#             */
/*   Updated: 2019/11/06 08:00:05 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *pdst;
	unsigned char *psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n-- > 0)
	{
		*(pdst++) = *(psrc++);
		if (*psrc == (unsigned char)c)
			return (pdst + 1);
	}
	return (NULL);
}
