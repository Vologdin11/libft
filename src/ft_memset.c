/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:02:24 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:26:44 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t count)
{
	char	*convStr;
	size_t	i;

	convStr = (char *)str;
	i = 0;
	while (i < count)
	{
		convStr[i] = ch;
		i++;
	}
	return (str);
}
