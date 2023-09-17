/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:29:46 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 00:23:28 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	num;
	long	lnum;

	lnum = n;
	if (lnum < 0)
	{
		lnum *= -1;
		write(fd, "-", 1);
	}
	num = lnum % 10 + '0';
	if (lnum / 10 > 0)
		ft_putnbr_fd(lnum / 10, fd);
	write(fd, &num, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(-1222, 1);
}
*/
