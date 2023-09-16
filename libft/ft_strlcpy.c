/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:29:46 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 00:23:28 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (--size && *src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (len);
}
