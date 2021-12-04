/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:30:27 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 21:31:54 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_count_words(char const *s, char c)
{
	int		i;
	int		w;
	char	**tab;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			w++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	tab = (char**)malloc(sizeof(char*) * (w + 1));
	if (tab == NULL)
		return (NULL);
	tab[w] = NULL;
	return (tab);
}

static char	**ft_count_char(char **tab, char const *s, char c)
{
	int i;
	int w;
	int j;

	w = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			j++;
			while (s[i] != c && s[i])
			{
				i++;
				j++;
			}
			tab[w] = (char*)malloc(sizeof(char) * (j + 1));
			if (tab[w] == NULL)
				return (NULL);
			w++;
		}
	}
	return (tab);
}

static char	**ft_fill(char **tab, char const *s, char c)
{
	int w;
	int l;
	int i;

	i = 0;
	w = 0;
	while (s[i])
	{
		l = 0;
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
			{
				tab[w][l] = s[i];
				i++;
				l++;
			}
			tab[w][l] = 0;
			w++;
		}
	}
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (s == NULL)
		return (NULL);
	tab = ft_count_words(s, c);
	if (tab == NULL)
		return (NULL);
	tab = ft_count_char(tab, s, c);
	if (tab == NULL)
		return (NULL);
	tab = ft_fill(tab, s, c);
	return (tab);
}
