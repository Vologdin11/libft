/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:02:48 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/25 16:36:06 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t count)
{
	char	*convStr;
	size_t	i;

	convStr = (char *)str;
	i = 0;
	while (i < count)
	{
		convStr[i] = 0;
		i++;
	}
}
