/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 13:32:13 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:27:25 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		count;
	char	*res;

	count = ft_strlen(str);
	res = (char *)str;
	while (count >= 0)
	{
		if (res[count] == (unsigned char)ch)
			return (&res[count]);
		count--;
	}
	return (NULL);
}
