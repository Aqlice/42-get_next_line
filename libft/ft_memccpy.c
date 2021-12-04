/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:35:39 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 20:36:07 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*d;
	char			*s;

	i = 0;
	d = dst;
	s = (char*)src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (char)c)
			return (&d[i + 1]);
		i++;
	}
	return (NULL);
}
