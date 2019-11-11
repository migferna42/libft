/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:38:25 by migferna          #+#    #+#             */
/*   Updated: 2019/11/11 12:57:46 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t it;

	it = 0;
	while (src[it] != '\0' && it < dstsize - 1)
	{
		dst[it] = src[it];
		it++;
		dstsize--;
	}
	while (it < dstsize)
	{
		dst[it] = '\0';
		it++;
	}
	if (dstsize > 0)
		dst[it] = '\0';
	return (ft_strlen(src));
}
