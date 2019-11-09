/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 09:24:28 by migferna          #+#    #+#             */
/*   Updated: 2019/11/09 09:54:10 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *subs;
	char *pstart;
	
	*pstart = *s;
	while (start-- > 0)
		s++;
	if (!(subs = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (*pstart)
	{
		*subs = *pstart;
		subs++;
		pstart++;
	}
	*subs = '\0';
	return (subs);

}
