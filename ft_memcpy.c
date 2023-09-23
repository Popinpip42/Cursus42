/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:45:48 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 04:51:58 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*aux_d;
	unsigned const char	*aux_s;

	aux_d = dst;
	aux_s = src;
	if (!aux_d && !aux_s)
		return (NULL);
	while (n--)
		*aux_d++ = *aux_s++;
	return (dst);
}
