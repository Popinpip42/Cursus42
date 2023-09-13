/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:45:48 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/13 07:22:06 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memcpy(void *dst, const void *src, size_t n)
{
	char		*aux_d;
	const char	*aux_s;

	aux_d = dst;
	aux_s = src;
	while (n--)
		*aux_d++ = *aux_s++;
	return (dst);
}
