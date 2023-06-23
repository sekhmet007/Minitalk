/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuberbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:54:50 by esuberbi          #+#    #+#             */
/*   Updated: 2023/02/02 12:25:01 by esuberbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*out;
	t_list	*elem;

	if (!lst || !f || !del)
		return (NULL);
	out = ft_lstnew(NULL);
	if (!out)
		return (NULL);
	elem = out;
	while (lst)
	{
		elem->content = (*f)(lst->content);
		if (lst->next)
		{
			elem->next = ft_lstnew(NULL);
			if (!elem->next)
			{
				ft_lstclear(&out, del);
				return (NULL);
			}
			elem = elem->next;
		}
		lst = lst->next;
	}
	return (out);
}
