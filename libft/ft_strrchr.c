/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:48:56 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 04:02:18 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*aux;

	aux = s;
	while (*s)
		s++;
	if (c == '\0')
		return ((char *)s);
	else
	{
		while (s >= aux)
		{
			if (*s == (char)c)
				return ((char *) s);
			s--;
		}
	}
	return (NULL);
}
/*
int	main(void)
{
	char	cade[20] = "teste";
	char	*aux;
	aux = ft_strrchr(cade, 't' + 256);
	while (aux >= cade)
	{
		printf("%c\n", *aux);
		aux--;
	}
	//printf("%s\n", aux + 1);
}
*/
