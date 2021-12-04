/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:33:17 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 20:34:21 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *begin;
	t_list *next;

	if (lst == NULL || (*f) == NULL)
		return (NULL);
	new = (t_list*)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new = (*f)(lst);
	begin = new;
	next = new;
	lst = lst->next;
	while (lst)
	{
		new = (t_list*)malloc(sizeof(t_list));
		if (new == NULL)
			return (NULL);
		new = (*f)(lst);
		lst = lst->next;
		next->next = new;
		next = new;
	}
	return (begin);
}
