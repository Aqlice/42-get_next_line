/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:35:05 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 20:35:17 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*m;
	size_t			i;

	i = 0;
	m = (unsigned char*)malloc(sizeof(unsigned char) * size);
	if (m == NULL)
		return (NULL);
	while (i < size)
		m[i++] = 0;
	return ((void*)m);
}
