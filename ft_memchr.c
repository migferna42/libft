/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:22:02 by migferna          #+#    #+#             */
/*   Updated: 2019/11/07 14:34:10 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			it;
	unsigned char	*ps;
	unsigned char	uc;

	it = 0;
	ps = (unsigned char *)s;
	uc = (unsigned char)c;
	while (it < n)
	{
		if (ps[it] == c)
			return (&ps[it]);
		it++;
	}
	return (NULL);
}
