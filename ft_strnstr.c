/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:52:51 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 03:16:38 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *) haystack);
	i = 0;
	j = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (i + j < len && needle[j] && haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[20] = "hola  z a";
	char	sub_str[20] = "z a";
	printf("%s\n", ft_strnstr(str, sub_str, 9));
	printf("%s\n", strnstr(str, sub_str, 9));
}
*/
