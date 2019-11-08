/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:23:45 by migferna          #+#    #+#             */
/*   Updated: 2019/11/07 15:45:45 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t it;

	it = 0;
	while (src[it] != '\0' && it < len)
	{
		dst[it] = src[it];
		it++;
	}
	while (it < len)
	{
		dst[it] = '\0';
		it++;
	}
	return (dst);
}
