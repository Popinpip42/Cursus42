/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 05:38:20 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 06:05:03 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*aux_d;
	unsigned char	*aux_s;

	aux_d = (unsigned char *) dst;
	aux_s = (unsigned char *) src;
	if (aux_d == '\0' && aux_s == '\0')
		return (dst);
	if (dst > src)
	{
		aux_d += len;
		aux_s += len;
		while (len--)
			*aux_d-- = *aux_s--;
	}
	else
	{
		while (len--)
			*aux_d++ = *aux_s++;
	}
	return (dst);
}
