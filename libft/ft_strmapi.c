/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:53:43 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/18 11:53:56 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/*
char	ft_to_upper(unsigned int index, char c)
{
	if (index < 0)
		return (0);
	if (ft_isalpha(c))
		c -= 32;
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	int		len;
	char	*new_str;

	len = ft_strlen(s);
	new_str = (char *)malloc(len * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s, len + 1);
	index = 0;
	while (new_str[index])
	{
		new_str[index] = f(index, new_str[index]);
		index++;
	}
	return (new_str);
}
/*
int	main(void)
{
	char	*new_str = ft_strmapi("abcd0 ", ft_to_upper);
	printf("%s\n", new_str);
	free(new_str);
}
*/
