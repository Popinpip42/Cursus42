/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:50:26 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/20 07:02:12 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	inside_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		real_size;
	char		*trimmed_str;
	char const	*p_end;

	while (inside_set(*s1, set))
		s1 ++;
	p_end = (s1 + ft_strlen(s1) - 1);
	while (inside_set(*p_end, set) && p_end >= s1)
		p_end --;
	real_size = 0;
	while (p_end-- >= s1)
		real_size++;
	trimmed_str = (char *)malloc(real_size * sizeof(char) + 1);
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1, real_size + 1);
	return (trimmed_str);
}
/*
int	main(void)
{
	//printf("%s\n", ft_strtrim("abHolaabab", "ab"));
	//printf("%s\n", ft_strtrim("", ""));
	//printf("%s\n", ft_strtrim("abcd", ""));
	//printf("%s\n", ft_strtrim("", "v"));
printf("%s\n", ft_strtrim("xxxz  test with x and z and x.  zxxx z", "z x"));
}
*/
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*trimmed_str;
	char	*p_start;
	char	*p_end;

	size = ft_strlen(set);
	//Trimming left
	while (!ft_strncmp(s1, set, size) && size > 0)
		s1 += size;
	p_start = (char *)s1;
	//Trimming rigth
	s1 += (ft_strlen(s1) - size);
	while (!ft_strncmp(s1, set, size) && size > 0)
		s1 -= size;
	p_end = (char *) (s1 + size);
	//Calc trimmed real size
	int	real_size = 0;
	while (p_end-- > p_start)
		real_size++;
	trimmed_str = (char *)malloc(real_size * sizeof(char) + 1);
	if (!trimmed_str)
		return (NULL);
	int	i = 0;
	while (i < real_size)
	{	
		trimmed_str[i] = p_start[i];
		i++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
*/
