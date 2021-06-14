/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:12:22 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:27:12 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		size;
	int		i;
	char	*copy;

	i = 0;
	size = ft_strlen(str) + 1;
	copy = (char *)malloc(size);
	if (copy == NULL)
		return (NULL);
	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
