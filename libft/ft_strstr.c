/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:33:13 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 21:33:20 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return (s1);
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			k = i;
			j = 0;
			while (s1[i + j] == s2[j] && s2[j] != 0)
				j++;
			if (s2[j] == 0)
				return (&s1[k]);
			i = k;
		}
		i++;
	}
	return (NULL);
}
