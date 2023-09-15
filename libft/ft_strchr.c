/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:34:19 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 05:36:22 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (NULL);
	while (*s)
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *) s);
	return (NULL);
}
/*
int	main(void)
{
	char	cade[20] = "";
	char	*aux;
	aux = ft_strchr(cade, 'e');
	while (aux >= cade)
	{
		write(1, &*aux, 1);
		aux--;
	}
}
*/
