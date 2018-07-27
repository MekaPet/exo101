/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: elgrusko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 10:01:30 by elgrusko     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 16:26:32 by elgrusko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_sudoku.h"
#include "ft_write.h"
#include "ft_verif.h"
#include "ft_free.h"

void	print_sudoku(int **sudoku)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(sudoku[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		**ft_fill_tab(int **sudoku, char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 1;
	if (!(sudoku = (int**)malloc(sizeof(int*) * 9)))
		return (0);
	while (i < 9)
	{
		j = 0;
		if (!(sudoku[i] = (int*)malloc(sizeof(int) * 9)))
			return (0);
		while (j < 9)
		{
			if (argv[k][j] == 46)
				sudoku[i][j] = 0;
			else
				sudoku[i][j] = argv[k][j] - 48;
			j++;
		}
		i++;
		k++;
	}
	return (sudoku);
}

int		check_content(char **argv)
{
	int i;
	int j;
	int total;

	i = 1;
	while (argv[i] != '\0')
	{
		j = 0;
		total = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] == '.') || (argv[i][j] > 48 && argv[i][j] <= 57))
			{
				j++;
				total++;
			}
			else
				return (0);
		}
		if (total != 9)
			return (0);
		i++;
	}
	return (1);
}

int		check_doubles(char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			k = j + 1;
			while (argv[i][k])
			{
				if ((argv[i][k] == argv[i][j]) && argv[i][j] != '.')
					return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int **sudoku;
	int i;

	sudoku = NULL;
	i = 0;
	if (argc == 10)
	{
		if (check_content(argv) && check_doubles(argv) && check_numbers(argv))
		{
			sudoku = ft_fill_tab(sudoku, argv);
			ft_sudoku(sudoku, 0);
			if (valid_sudoku(sudoku) == 0)
			{
				ft_putstr("Error\n");
				return (0);
			}
			print_sudoku(sudoku);
			ft_free(sudoku);
		}
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
