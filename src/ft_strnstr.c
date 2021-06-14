/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 20:28:37 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:27:23 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *subStr, size_t count)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*subStr == 0)
		return ((char *)str);
	while (str[i] != 0 && i < count)
	{
		if (str[i] == subStr[0])
		{
			j = 1;
			while (str[i + j] != 0 && subStr[j] != 0 && \
			(i + j < count) && str[i + j] == subStr[j])
				j++;
			if (subStr[j] == 0)
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
