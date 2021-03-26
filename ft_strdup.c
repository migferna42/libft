/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:38:59 by migferna          #+#    #+#             */
/*   Updated: 2021/03/26 15:16:22 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	it;
	char	*s2;
	size_t	size;

	it = 0;
	size = ft_strlen(s1);
	s2 = malloc(sizeof(char) * size + 1);
	if (!s2)
		return (0);
	while (it < size)
	{
		s2[it] = s1[it];
		it++;
	}
	s2[it] = '\0';
	return (s2);
}
