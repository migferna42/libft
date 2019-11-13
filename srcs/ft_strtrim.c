/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 11:22:03 by migferna          #+#    #+#             */
/*   Updated: 2019/11/13 12:31:51 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	k;
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	k = 0;
	len = 0;
	while (s1[len])
		len++;
	while (ft_inset(s1[i], set))
		i++;
	while (ft_inset(s1[len - 1], set))
		len--;
	if (len < i)
		len = i;
	str = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

int main(void)
{
	printf("%s\n",ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n       \n \n \t\t\n  ", " \n\t") );
}
