/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:29:04 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 20:30:03 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_conv(char *str, char neg, unsigned int nu)
{
	int i;

	i = 0;
	while (nu > 0)
	{
		str[i] = (nu % 10) + 48;
		nu = nu / 10;
		i++;
	}
	if (neg == '-')
	{
		str[i] = neg;
		str[i + 1] = 0;
	}
	else
		str[i] = 0;
	return (str);
}

char		*ft_itoa(int n)
{
	char			*str;
	char			neg;
	unsigned int	nu;

	neg = 0;
	nu = n;
	if (n < 0)
	{
		neg = '-';
		nu = -n;
	}
	str = (char*)malloc(sizeof(char) * 12);
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = 0 + 48;
		str[1] = 0;
		return (str);
	}
	str = ft_itoa_conv(str, neg, nu);
	return (ft_strrev(str));
}
