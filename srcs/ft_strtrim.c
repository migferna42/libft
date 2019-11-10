/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 11:22:03 by migferna          #+#    #+#             */
/*   Updated: 2019/11/10 12:01:09 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int j;
	char *str;
	(void)set;

	if (!(*s1))
		return (NULL);
	while (*s1 && ft_iswspace(*s1))
		s1++;
	j = ft_strlen(s1);
	while (ft_iswspace(*s1 + j))
		j--;
	if (!(str = malloc(sizeof(char) * (j + 1))))
		return (NULL);
	ft_strncpy(str, s1, j + 1);
	return (str);
}
