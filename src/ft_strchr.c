/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 13:13:37 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:27:03 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*res;

	res = (char *)str;
	if (ch == 0)
	{
		return (res + ft_strlen(str));
	}
	while (*res != 0)
	{
		if (*res == (unsigned char)ch)
		{
			return (res);
		}
		res++;
	}
	return (NULL);
}
