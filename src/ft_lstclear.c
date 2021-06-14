/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:13:03 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/25 12:31:17 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*forDel;

	tmp = *lst;
	while (tmp)
	{
		forDel = tmp;
		tmp = tmp->next;
		del(forDel->content);
		free(forDel);
	}
	*lst = NULL;
}
