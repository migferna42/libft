/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 07:59:38 by migferna          #+#    #+#             */
/*   Updated: 2021/03/26 19:49:15 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_cont(char const *s, char c)
{
	int	it;
	int	cont;

	it = 0;
	cont = 0;
	while (s[it])
	{
		if (s[it] == c)
			it++;
		else
		{
			cont++;
			while (s[it] != c)
				it++;
		}
	}
	return (cont);
}

static int	ft_strnlen(char const *s, char c)
{
	int	cont;

	cont = 0;
	while (*s != c)
	{
		cont++;
		s++;
	}
	return (cont);
}

static char	**fill_table(int count, char const *s, char c)
{
	char	**table;
	int		word;
	int		j;
	int		it;

	table = malloc(sizeof(char *) * count + 1);
	if (!table)
		return (NULL);
	it = 0;
	word = 0;
	while (word < count)
	{
		table[word] = malloc(sizeof(char) * ft_strnlen(&s[it], c) + 1);
		if (!(table[word]))
			return (NULL);
		j = 0;
		while (s[it] == c)
			it++;
		while (s[it] != c && s[it])
			table[word][j++] = s[it++];
		table[word++][j] = '\0';
	}
	table[word] = NULL;
	return (table);
}

char	**ft_split(char const *s, char c)
{
	int	count;

	if (!s)
		return (NULL);
	count = ft_words_cont(s, c);
	return (fill_table(count, s, c));
}
