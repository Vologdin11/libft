/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:21:33 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:27:30 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subS;

	i = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	subS = (char *)malloc(len + 1);
	if (subS == 0)
		return (0);
	while (s[start] && i < len)
	{
		if (start > ft_strlen(s))
			break ;
		subS[i] = s[start];
		i++;
		start++;
	}
	subS[i] = 0;
	return (subS);
}
