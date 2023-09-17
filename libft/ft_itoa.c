/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:29:46 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 00:23:28 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr(int n, char *new_str, long div)
{
	char	char_num;
	long	l_num;
	int		index;

	l_num = n;
	index = 0;
	if (l_num < 0)
	{
		new_str[index] = '-';
		l_num *= -1;
		index++;
	}
	while (div > 0)
	{
		char_num = l_num / div + '0';
		new_str[index] = char_num;
		l_num %= div;
		div /= 10;
		index++;
	}
	if (n == 0)
		new_str[index] = '0';
}

char	*ft_itoa(int n)
{
	int		n_len;
	long	div;
	char	*new_str;
	long	l_num;

	l_num = (long) n;
	n_len = 0;
	if (l_num <= 0)
	{
		l_num *= -1;
		n_len++;
	}
	div = 1;
	while (l_num > 0)
	{
		div *= 10;
		n_len++;
		l_num /= 10;
	}
	new_str = (char *)malloc(n_len * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	ft_putnbr(n, new_str, div / 10);
	new_str[n_len] = '\0';
	return (new_str);
}
/*
int	main(void)
{
	//ft_itoa(-12222);
	//char	cade[20] = "";
	//ft_putnbr(-122, cade, 100);
	//printf("%s\n", cade);
	printf("%s\n", ft_itoa(2147483648));
}*/
