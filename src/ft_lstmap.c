/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:37:31 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 17:28:04 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*tmpNew;

	if (!lst || !f)
		return (NULL);
	tmp = lst;
	tmpNew = NULL;
	new = ft_lstnew(f(tmp->content));
	if (!new)
	{
		ft_lstclear(&new, del);
		ft_lstclear(&tmp, del);
		ft_lstclear(&tmpNew, del);
		return (NULL);
	}
	tmpNew = new;
	while (tmp->next)
	{
		tmpNew->next = ft_lstnew(f(tmp->content));
		tmpNew = tmpNew->next;
		tmp = tmp->next;
	}
	return (new);
}
