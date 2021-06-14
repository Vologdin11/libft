/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 07:52:09 by mjerrica          #+#    #+#             */
/*   Updated: 2021/04/26 19:26:51 by mjerrica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	tmp;
	long	i;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i *= -1;
	}
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		tmp = (i % 10) + '0';
		write(fd, &tmp, 1);
	}
	else
	{
		tmp = i + '0';
		write(fd, &tmp, 1);
	}
}
