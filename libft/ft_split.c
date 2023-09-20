/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:43:48 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/20 14:01:39 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	*measure_str_matrix(char **matrix);

char	**realloc_str_matrix(char **matrix, size_t new_row_size)
{
	int	*measures = measure_str_matrix(matrix);
	//printf("ARRIVING: rows: %d, cols %d\n", measures[0], measures[1]);
	int numRows = measures[0];
	//int numCols = measures[1];
	free(measures);
	numRows++;
	//printf("rows++: rows: %d, cols %d\n", measures[0], measures[1]);
	//printf("%d\n",numRows);
	matrix = (char **)realloc(matrix, (numRows + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	matrix[numRows - 1] = (char *)malloc(new_row_size * sizeof(char));
	if (!matrix[numRows - 1])
		return (NULL);
	//matrix[numRows - 1][0] = '\0';
	return (matrix);
	//ToDo: Increase measures[0] + 1, 
	//ToDo: Allocate size characters in the new row. (Have in mind the '\0' 
	//return (NULL);
}

int	get_wsize_until(char const *str, char c)
{
	int	word_size;

	word_size = 0;
	while (str[word_size] != (char)c)
		word_size++;
	return (word_size);
}

char	**ft_split(char const *s, char c)
{
	int		rows;
	char	**matrix;
	int	word_size;

	word_size = get_wsize_until(s, c);
	rows = 0;
	if (word_size > 0)
	{
		matrix = (char **)malloc(rows * sizeof(char *));
		*matrix = (char  *)malloc(word_size * sizeof(char) + 1);	
		ft_strlcpy(matrix[0], s, word_size + 1);
	}
	s += word_size + 1;
	int	i = 1;
	word_size = 0;
	while (*s)//If not null after the delimiter
	{
		//printf("word_szize : %d\n", word_size);
		
		if (*s == (char)c)	
		{
			matrix = realloc_str_matrix(matrix, word_size + 1);
			ft_strlcpy(matrix[i], s - word_size, word_size + 1);
			i ++;
			word_size = 0;
		}
		else
			word_size ++;
		s ++;
		
		//printf("word_size: %d, current *s: %c, i: %d\n", word_size, *s, i);
		if (*s == '\0')	
		{	
			matrix = realloc_str_matrix(matrix, word_size + 1);
			ft_strlcpy(matrix[i], s - word_size, word_size + 2);
		}
	}
	/*
	word_size = 0;
	while (*s != (char) c)
	{
		word_size ++;
		s--;
	}
	printf("word_size: %d, current *s: %c, i: %d\n", word_size, *s, i);
	matrix = realloc_str_matrix(matrix, word_size + 1);
	ft_strlcpy(matrix[i + 1], s + 1, word_size + 1);
	*/
	//printf("%c\n", *(s + word_size));
	//matrix = realloc_str_matrix(matrix, word_size + 1);
	//printf("%d\n", i);
	return (matrix);
}
/*
int	main(void)
{
	char	**matrix;
	matrix = ft_split("hhpl app l a l a", 'l');
	int	i = 0;
	while (matrix[i])
	{
		printf("%s\n", matrix[i]);
		i++;
	}
}*/

int	*measure_str_matrix(char **matrix)
{
	int	row_size;
	int	col_size;
	int	col;
	int	*measures;

	row_size = 0;
	col_size = 0;
	while (matrix[row_size])
	{
		col = 0;
		while (matrix[row_size][col] != '\0')
		{
			col_size++;
			col++;
		}
		row_size++;
	}
	printf("OUTSIDE rows: %d, cols: %d\n", row_size, col_size);

	measures = (int *)malloc(2 * sizeof(int));
	if (!measures)
		return (NULL);
	measures[0] = row_size;
	measures[1] = col_size;
	return (measures);
}

