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

int	*measure_str_matrix(char **matrix);

char	**realloc_str_matrix(char **matrix, size_t new_row_size)
{
	int	*measures = measure_str_matrix(matrix);
	//printf("rows: %d, cols %d\n", measures[0], measures[1]);
//--------------------
	int numRows = measures[0];
	int numCols = measures[1];
	free(measures); // Free the memory used for measurements.
	// Increase the number of rows by one.
	numRows++;
	printf("%d\n",numRows);
	// Reallocate memory for the updated matrix.
	matrix = (char **)realloc(matrix, (numRows + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	//WORKS UNTILHER---------------------------------------
	
	// Allocate memory for the new row with the specified size.
	matrix[numRows - 1] = (char *)malloc((new_row_size + 1) * sizeof(char));
	if (!matrix[numRows - 1])
		return (NULL);

	// Initialize the new row, e.g., set it to an empty string.
	matrix[numRows - 1][0] = '\0';

	return matrix;
//--------------------

	//ToDo: Increase measures[0] + 1, 
	//ToDo: Allocate size characters in the new row. (Have in mind the '\0' 
	//return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		rows;
	char	**matrix;
	int	word_size;

	word_size = 0;
	rows = 0;
	while (s[word_size] != (char)c && s[word_size] != '\0') 
		word_size++;
	if (word_size > 0)
	{
		matrix = (char **)malloc(rows * sizeof(char *));
		*matrix = (char  *)malloc(word_size * sizeof(char) + 1);
	}
	//printf("%c\n", *(s + word_size));
	ft_strlcpy(matrix[0], s, word_size + 1);
	//printf("%d\n", i);
	return (matrix);
}

int	main(void)
{
	char	**matrix;
	matrix = ft_split("hhpl a l a l a  ", 'l');
	//printf("%s\n", matrix[0]);
	int	size = 0;
	while (matrix[0][size] != '\0')
	{
		printf("%c, %p\n", matrix[0][size], &matrix[0][size]);
		size++;
	}
	//printf("%d\n", size);
	//Initial matrix measures
	int	*measures = measure_str_matrix(matrix);
	printf("rows: %d, cols %d\n", measures[0], measures[1]);

	//Reallocated matrix measures
	char	**new_matrix = realloc_str_matrix(matrix, 5);

	int	*measures2 = measure_str_matrix(matrix);
	printf("rows: %d, cols %d\n", measures2[0], measures2[1]);

//-----------------------
	size = 0;
	while (matrix[size])
	{
		free(matrix[size]);
		size++;
	}
	free(matrix);
}

int	*measure_str_matrix(char **matrix)
{
	int	row_size = 0;
	int	col_size;
	while (matrix[row_size])
	{
		col_size = 0;
		while (matrix[row_size][col_size] != '\0')
		{
			col_size++;
		}
		row_size++;
	}
	//printf("rows: %d, cols: %d\n", row_size, col_size);
	int	*measures = (int *)malloc(2 * sizeof(int));
	measures[0] = row_size;
	measures[1] = col_size;
	return (measures);
}

