/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:38:51 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 20:41:19 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lenup(size_t len, unsigned char *d, unsigned char *s)
{
	len--;
	while (len > 0)
	{
		d[len] = s[len];
		len--;
	}
	d[0] = s[0];
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (len > 0)
		ft_lenup(len, d, s);
	return (dst);
}
