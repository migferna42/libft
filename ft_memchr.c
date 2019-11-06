/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:22:02 by migferna          #+#    #+#             */
/*   Updated: 2019/11/06 08:12:02 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ps;
	unsigned char uc;

	ps = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n-- > 0)
	{
		if (*ps == c)
			return (ps);
	}
	return (NULL);
}
