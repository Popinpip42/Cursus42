/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:43:10 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/12 13:58:11 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *dest, int c, size_t len)
{
	char	*aux_d;

	aux_d = (char *)dest;
	while (len--)
		*aux_d++ = (unsigned char) c;
	return (dest);
}
/*
int	main(void)
{
	int	arr[5] = {1, 2, 3, 4, 5};
	
	int	i = 0;
	int	size = sizeof(arr) / sizeof(arr[0]);
	//ft_memset(arr, size, sizeof(arr));
	memset(arr, size, sizeof(arr));
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
*/
