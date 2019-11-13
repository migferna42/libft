/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:55:51 by migferna          #+#    #+#             */
/*   Updated: 2019/11/13 12:44:01 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inset(char c, char const *s)
{
	int len;
	int it;

	it = 0;
	len = ft_strlen(s);
	while (it < len)
	{
		if (s[it] == c)
			return (1);
		it++;
	}
	return (0);
}
