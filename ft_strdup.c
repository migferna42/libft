/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:38:59 by migferna          #+#    #+#             */
/*   Updated: 2019/11/06 16:00:48 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *s2;
	size_t size;

	size = ft_strlen(s1);
	if (!(s2 = (char *)malloc(sizeof(char) * size)))
	{
		return (NULL);
	}
	while (*s1)
	{
		*(s2++) = *(s1++);
	}
	*s2 = '\0';
	return (s2);
}
