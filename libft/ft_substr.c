/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:29:46 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/14 00:23:28 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	actual_len;

	if (!s)
		return (NULL);
	actual_len = 0;
	i = 0;
	while (s[i] && i < start)
		i++;
	while (s[i] && actual_len < len)
	{
		i++;
		actual_len++;
	}
	substr = (char *)malloc(actual_len * sizeof(char) + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < actual_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr[i] = '\0', substr);
}
