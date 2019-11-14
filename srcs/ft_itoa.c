/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:28:54 by migferna          #+#    #+#             */
/*   Updated: 2019/11/14 20:06:54 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		it;
	
	size = 10;
	it = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str[size] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		it++;
	}
	while (it < size--)
	{
		str[size] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
