/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:53:09 by migferna          #+#    #+#             */
/*   Updated: 2019/11/06 15:06:27 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int size;

	size = ft_strlen(s);
	while (size-- > 0)
	{
		if (s[size] == c)
			return (&s[size]);
	}
	return (NULL);
}
