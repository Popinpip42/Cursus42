/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 01:40:14 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/12 01:52:46 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p_s;

	p_s = s;
	while (*p_s && n--)
	{
		if (*p_s == (unsigned char) c)
			return ((void *) p_s);
		p_s++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	cade[20] = "Holap";
	char	*aux_c = (char *) ft_memchr((void *) cade, 'o', 2);
	printf("%s\n", aux_c);
}
*/
