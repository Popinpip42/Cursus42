/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 01:54:24 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/12 02:07:13 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*aux_s1;
	char	*aux_s2;

	aux_s1 = (char *)s1;
	aux_s2 = (char *)s2;
	while (*aux_s1 == *aux_s2 && --n)
	{
		aux_s1 ++;
		aux_s2 ++;
	}
	return (*aux_s1 - *aux_s2);
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
