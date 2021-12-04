/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:31:35 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 20:31:57 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *p;
	t_list *next;

	p = *alst;
	while (p)
	{
		next = p->next;
		(*del)(p->content, p->content_size);
		free(p);
		p = next;
	}
	*alst = NULL;
}
