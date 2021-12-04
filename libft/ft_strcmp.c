/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:19:22 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 21:19:44 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s;
	unsigned char	*p;

	s = (unsigned char*)s1;
	p = (unsigned char*)s2;
	i = 0;
	while (s[i] != '\0' && p[i] != '\0' && s[i] == p[i])
		i++;
	return (s[i] - p[i]);
}
