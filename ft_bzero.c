/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:12:29 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/12 22:41:23 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*aux_s;

	aux_s = s;
	while (n--)
		*aux_s++ = '\0';
}
/*
int	main(void)
{
	char	arr[5] = "hola";
	int		arr2[6] = {1, 2, 3, 4, 5};
	ft_bzero(arr, 3 * sizeof(char));
	//printf("%s\n", arr);
	int	size;
	size = sizeof(arr) / sizeof(*arr);
	int	i = 0;
	while (i < size)
	{	
		printf("%c\n", arr[i]);
		i++;
	}
	ft_bzero(arr2, 2 * sizeof(int));
	size = sizeof(arr2) / sizeof(*arr2);
	i = 0;
	while (i < size)
	{	
		printf("%i\n", arr2[i]);
		i++;
	}

}
*/
