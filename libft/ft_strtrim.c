/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:29:46 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 00:23:28 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*p_start;

	size = ft_strlen(set);
	while (!ft_strncmp(s1, set, size))
		s1 += size;
	p_start = (char *)s1;
	s1 += ft_strlen(s1);

	return (p_start);
}

int	main(void)
{
	printf("%s\n", ft_strtrim("ababHolaabab", "ab"));
}
