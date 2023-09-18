/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:47:09 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/18 11:47:12 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*all;

	all = malloc(nmemb * size);
	if (!all)
		return (NULL);
	ft_bzero(all, nmemb * size);
	return (all);
}
