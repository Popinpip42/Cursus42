/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:52:51 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/13 07:21:07 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = 0;
	while (needle[needle_len])
		needle_len++;
	i = 0;
	while (i <= len - needle_len)
	{
		j = 0;
		while (j < needle_len && haystack[i + j] == needle[j])
				j++;
		if (j == needle_len)
			return ((char *)(haystack + i));
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
