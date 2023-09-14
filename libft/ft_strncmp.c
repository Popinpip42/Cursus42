/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:54:57 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 00:03:46 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (0);
}
/*
int	main(void)
{
	char	cade1[20] = "zyxbcdefgh";
	char	cade2[20] = "abcdwxyz";
	printf("%d\n", ft_strncmp(cade1, cade2, 0));
	printf("%d\n", strncmp(cade1, cade2, 0));
}
*/
