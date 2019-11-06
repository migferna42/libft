/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:38:25 by migferna          #+#    #+#             */
/*   Updated: 2019/11/06 15:07:43 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t size;

	size = ft_strlen(src);
	if (dstsize == 0)
		return (size);
	size = 0;
	while (size < (dstsize - 1))
		*(dst++) = *(src++);
	*(dst) = '\0';
	return (ft_strlen(src));
}
