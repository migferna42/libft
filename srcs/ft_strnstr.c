/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:47:05 by migferna          #+#    #+#             */
/*   Updated: 2019/11/12 09:34:33 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	if (!needle)
		return ((char *)haystack);
	i = 0;
	while (haystack != '\0')
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j] && i < (int)len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
		}
	}
	return (0);
}
