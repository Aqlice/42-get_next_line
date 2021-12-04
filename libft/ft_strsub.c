/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:33:33 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 21:33:43 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	new = (char*)malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	while (len > 0)
	{
		new[i] = s[start];
		i++;
		start++;
		len--;
	}
	new[i] = 0;
	return (new);
}
