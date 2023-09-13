/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:34:19 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/11 23:46:56 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *) s);
		s++;
	}
	if (c == *s)
		return ((char *) s);
	return (NULL);
}
/*
int	main(void)
{
	char	cade[20] = "Holaa";
	char	*aux;
	aux = strchr(cade, '\0');
	while (*aux != 'H')
	{
		write(1, &*aux, 1);
		aux--;
	}
}*/
