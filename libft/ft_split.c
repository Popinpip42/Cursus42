/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:43:48 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/21 03:25:41 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	calc_words(char const *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!flag)
			{
				count++;
				flag = 1;
			}
		}
		else
			flag = 0;
		s++;
	}
	return (count);
}

char	*get_word(char const *s, char c)
{
	char	*word;
	int		size;

	size = 0;
	word = NULL;
	while (s[size] && s[size] != c)
		size ++;
	word = (char *)malloc((size + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, size + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		words_num;
	int		row;

	words_num = calc_words(s, c);
	matrix = (char **)malloc((words_num + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	row = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			matrix[row] = get_word(s, c);
			if (!matrix[row])
				return (NULL);
			row++;
			while (*s && *s != c)
				s++;
		}
	}
	matrix[row] = NULL;
	return (matrix);
}

/*
int	main(void)
{
	ft_split("hola", 'l');
}*/

/*
int get_wsize_until(char const *str, char c)
{
    int word_size = 0;
    while (str[word_size] != c && str[word_size] != '\0')
        word_size++;
    return word_size;
}

char **ft_split(char const *s, char c)
{
    int rows = 0;
    char **matrix = NULL;
    int word_size;

    while (*s)
    {
        word_size = get_wsize_until(s, c);
        if (word_size > 0)
        {
            matrix = (char **)realloc(matrix, (rows + 1) * sizeof(char *));
            if (!matrix)
                return NULL;
            
            matrix[rows] = (char *)malloc((word_size + 1) * sizeof(char));
            if (!matrix[rows])
                return NULL;
            
            strncpy(matrix[rows], s, word_size);
            matrix[rows][word_size] = '\0';
            rows++;
        }

        s += word_size;
        if (*s == c)
            s++;
    }

    matrix = (char **)realloc(matrix, (rows + 1) * sizeof(char *));
    if (!matrix)
        return NULL;
    matrix[rows] = NULL;
    return matrix;
}
// -----------CORRECTION_WITHOUT_SEGFAULT------------
*/

/*int	*measure_str_matrix(char **matrix);

char	**realloc_str_matrix(char **matrix, size_t new_row_size)
{
	int numRows;
	int	i;

	numRows = 0;
	while (matrix[numRows])
		numRows++;
	//printf("rows++: rows: %d, cols %d\n", measures[0], measures[1]);
	//printf("%d\n",numRows);
	numRows++;
	matrix = (char **)realloc(matrix, numRows * sizeof(char *));
	if (!matrix)
		return (NULL);
	matrix[numRows - 1] = (char *)malloc((new_row_size + 1) * sizeof(char));
	if (!matrix[numRows - 1])
		return (NULL);
	//matrix[numRows - 1][0] = '\0';
	i = 0;
	while(i < new_row_size)
	{
		matrix[numRows - 1][i] = '\0';
		i++;
	}
	return (matrix);
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
		*matrix = (char  *)malloc((word_size + 1) * sizeof(char));	
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
	
	word_size = 0;
	while (*s != (char) c)
	{
		word_size ++;
		s--;
	}
	printf("word_size: %d, current *s: %c, i: %d\n", word_size, *s, i);
	matrix = realloc_str_matrix(matrix, word_size + 1);
	ft_strlcpy(matrix[i + 1], s + 1, word_size + 1);
	
	//printf("%c\n", *(s + word_size));
	//matrix = realloc_str_matrix(matrix, word_size + 1);
	//printf("%d\n", i);
	return (matrix);
}
*/
/*
int	main(void)
{
	char	**matrix;
	matrix = ft_split("hello!", ' ');
	int	i = 0;
	while (matrix[i])
	{
		printf("%s\n", matrix[i]);
		i++;
	}
}

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
*/
