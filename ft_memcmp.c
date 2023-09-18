/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 01:54:24 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 00:05:29 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*aux_s1;
	const unsigned char	*aux_s2;

	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*aux_s1 != *aux_s2)
			return ((unsigned char)*aux_s1 - (unsigned char)*aux_s2);
		aux_s1 ++;
		aux_s2 ++;
	}
	return (0);
}
/*
int	main(void)
{
	char	cade1[20] = "Hola";
	char	cade2[20] = "Holb";
	printf("%d\n", ft_memcmp((void *)cade1, (void *)cade2, 4));
	printf("%d\n", memcmp((void *)cade1, (void *)cade2, 4));
}
*/
