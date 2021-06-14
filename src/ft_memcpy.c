/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:02:33 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:26:41 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t count)
{
	size_t	i;
	char	*convDest;
	char	*convSource;

	if (count == 0 || dest == source)
		return (dest);
	i = 0;
	convDest = (char *)dest;
	convSource = (char *)source;
	while (i < count)
	{
		convDest[i] = convSource[i];
		i++;
	}
	return (dest);
}
