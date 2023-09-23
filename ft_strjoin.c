/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:49:04 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/18 11:50:13 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		full_len;
	int		i;
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	full_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(full_len * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		new_str[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	new_str[ft_strlen(s1) + i] = '\0';
	return (new_str);
}
/*
int	main(void)
{
	printf("%s\n", ft_strjoin("abcd", "efghi"));
}*/
