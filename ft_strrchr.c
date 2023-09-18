/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:48:56 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/18 13:55:18 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*end_pointer;

	end_pointer = s;
	while (*end_pointer)
		end_pointer++;
	if (c == '\0')
		return ((char *)end_pointer);
	else
	{
		while (s <= end_pointer)
		{
			if (*end_pointer == (char)c)
				return ((char *) end_pointer);
			end_pointer--;
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
