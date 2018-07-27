/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_verif.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: elgrusko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 10:01:18 by elgrusko     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 16:22:26 by elgrusko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_write.h"

int		on_line(int k, int **sudoku, int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (sudoku[i][j] == k)
			return (0);
		j++;
	}
	return (1);
}

int		on_column(int k, int **sudoku, int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[i][j] == k)
			return (0);
		i++;
	}
	return (1);
}

int		on_block(int k, int **sudoku, int i, int j)
{
	int line;
	int column;

	line = i - (i % 3);
	column = j - (j % 3);
	i = line;
	j = column;
	while (i < line + 3)
	{
		j = column;
		while (j < column + 3)
		{
			if (sudoku[i][j] == k)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_numbers(char **argv)
{
	int i;
	int j;
	int total;

	total = 0;
	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] > 48 && argv[i][j] <= 57)
				total++;
			j++;
		}
		i++;
	}
	if (total < 17)
		return (0);
	return (1);
}

int		valid_sudoku(int **argv)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
