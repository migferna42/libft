/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:38:25 by migferna          #+#    #+#             */
/*   Updated: 2019/11/08 10:17:39 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t size;

	size = ft_strlen(src);
	if (dstsize == 0)
		return (size);
	size = 0;
	while (size < (dstsize - 1))
	{
		*(dst) = *(src);
		dst++;
		src++;
		size++;
	}
	while (*dst)
	{
		*dst = '\0';
		dst++;
	}
	*(dst + 1) = '\0';
	return (ft_strlen(src));
}
