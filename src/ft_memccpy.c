/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:02:39 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:26:34 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int ch, size_t count)
{
	size_t	i;
	char	*convDest;
	char	*convSource;

	i = 0;
	convDest = (char *)dest;
	convSource = (char *)source;
	while (i < count)
	{
		convDest[i] = convSource[i];
		if ((unsigned char)convSource[i] == (unsigned char)ch)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
