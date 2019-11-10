/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:23:00 by migferna          #+#    #+#             */
/*   Updated: 2019/11/10 09:34:07 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *memory;

	if (!(memory = (unsigned char *)malloc(size * count)))
		return (NULL);;
	while (count-- > 0)
		*(memory++) = 0;
	return (memory);
}
