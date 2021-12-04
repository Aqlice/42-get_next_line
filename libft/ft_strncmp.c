/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:25:53 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 21:25:58 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s;
	unsigned char	*p;

	s = (unsigned char*)s1;
	p = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s[i] && s[i] == p[i] && i < n - 1)
		i++;
	return (s[i] - p[i]);
}
