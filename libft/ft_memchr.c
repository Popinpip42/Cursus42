/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 01:40:14 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 04:38:51 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*p_s;

	p_s = (unsigned char *)s;
	while (n--)
	{
		if (*p_s == (unsigned char)c)
			return (p_s);
		p_s++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	cade[20] = "bounjourno";
	char	*aux_c = (char *) ft_memchr((void *) cade, 'n', 2);
	printf("%s\n", aux_c);
}
*/
