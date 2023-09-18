/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:43:48 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/18 14:17:38 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		rows;
	//int		cols;
	//int		i;
	char	**matrix;

	matrix = NULL;
	int word_size = 0;
	rows = 0;
	while (s[word_size] != (char)c && s[word_size] != '\0') 
		word_size++;
	if (word_size != 0)
		matrix = (char **)malloc(rows * sizeof(char *));
	*matrix = (char  *)malloc(word_size * sizeof(char) + 1);
	/*i = 0;
	while (i < word_size)
	{
		matrix[0][i] = s[i];
		printf("%c, %c\n", matrix[0][i], s[i]);
		i++;
	}
	matrix[0][i] = '\0';*/
	ft_strlcpy(matrix[0], s, word_size + 1);
	//printf("%d\n", i);
	return (matrix);
}
/*
int	main(void)
{
	char	**matrix;
	matrix = ft_split("h l a l a l a  ", 'l');
	//printf("%s\n", matrix[0]);
	int	i = 0;
	while (matrix[0][i] != '\0')
	{
		printf("%c\n", matrix[0][i]);
		i++;
	}
	//printf("\n");
	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	
}*/
