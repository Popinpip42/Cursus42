/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:48:56 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/11 23:54:33 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == *s)
		return ((char *) s);
	return ((char *) last);
}
/*
int	main(void)
{
	char	cade[20] = "HolaMondu";
	char	*aux;
	aux = ft_strrchr(cade, 'o');
	printf("%s\n", aux);
}
*/
