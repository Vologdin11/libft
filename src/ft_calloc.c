/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:05:22 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/25 16:38:32 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	len;
	char	*res;

	i = 0;
	len = count * size;
	res = (char *)malloc(len);
	if (res != NULL)
	{
		while (i < len)
		{
			res[i] = 0;
			i++;
		}
	}
	return (res);
}
