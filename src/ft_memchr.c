/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:53:16 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:26:36 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int ch, size_t count)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)arr;
	while (i < count)
	{
		if (tmp[i] == (unsigned char)ch)
			return (&tmp[i]);
		i++;
	}
	return (NULL);
}
