/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:29:46 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 00:23:28 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_s;
	size_t	size_d;

	size_d = ft_strlen(dst);
	size_s = ft_strlen(src);
	if (size == 0 || size_d >= size)
		return (size_s + size);
	while (*dst)
		dst++;
	size -= (size_d + 1);
	while (size-- && *src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (size_d + size_s);
}
/*
int	main(void)
{
	char	dest[20] = "pqrstuvwyz";
	printf("%ld\n", ft_strlcat(dest, "abcd", 26));
	printf("%s\n", dest);
}
*/
