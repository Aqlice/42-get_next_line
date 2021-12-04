/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:33:57 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 21:34:21 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strtrim_space()
{
	char	*new;

	if ((new = (char*)malloc(sizeof(char) * 1)))
		new[0] = 0;
	return (new);
}

static char	*ft_strtrim_one(char const *s, int d, int e)
{
	char	*new;
	int		i;

	i = e - d + 2;
	new = (char*)malloc(sizeof(char) * i);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (e >= d)
	{
		new[i] = s[d];
		i++;
		d++;
	}
	new[i] = 0;
	return (new);
}

char	*ft_strtrim(char const *s)
{
	int		d;
	int		e;

	d = 0;
	if (s == NULL)
		return (NULL);
	e = ft_strlen(s) - 1;
	while (s[d] && (s[d] == ' ' || s[d] == '\n' || s[d] == '\t'))
		d++;
	while (s[e] && e != 0 && (s[e] == ' ' || s[e] == '\n' || s[e] == '\t'))
		e--;
	if (e < d)
		return (ft_strtrim_space());
	if (e >= d)
		return (ft_strtrim_one(s, d, e));
	return (NULL);
}
