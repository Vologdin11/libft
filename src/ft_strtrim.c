/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:49:05 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:27:27 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findchar(char const *set, char ch)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	strStart;
	size_t	strEnd;
	char	*strRes;
	int		i;

	if (!s1 || !set)
		return (0);
	strStart = 0;
	strEnd = ft_strlen(s1);
	while (s1[strStart] && ft_findchar(set, s1[strStart]))
		strStart++;
	while (strEnd > strStart && ft_findchar(set, s1[strEnd - 1]))
		strEnd--;
	strRes = (char *)malloc(strEnd - strStart + 1);
	if (!strRes)
		return (0);
	i = 0;
	while (strStart < strEnd)
	{
		strRes[i] = s1[strStart];
		i++;
		strStart++;
	}
	strRes[i] = '\0';
	return (strRes);
}
