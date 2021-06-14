/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:39:28 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:26:42 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t count)
{
	size_t	i;
	char	*str;
	char	*copyStr;

	i = 0;
	str = (char *)source;
	copyStr = (char *)dest;
	if (dest == source)
		return (dest);
	if (str < copyStr)
	{
		while (count-- > 0)
			copyStr[count] = str[count];
	}
	else if (str > copyStr)
	{
		while (i < count)
		{
			copyStr[i] = str[i];
			i++;
		}
	}
	return (copyStr);
}
