/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:37:34 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/23 12:44:53 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if ((ch > 47 && ch < 58) || (ch > 64 && ch < 91) || (ch > 96 && ch < 123))
		return (1);
	return (0);
}
