/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 09:35:01 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:27:15 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*strRes;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	strRes = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!strRes)
		return (0);
	while (s1[j])
	{
		strRes[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
		strRes[i++] = s2[j++];
	strRes[i] = '\0';
	return (strRes);
}
