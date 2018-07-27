/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sudoku.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: elgrusko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 10:01:01 by elgrusko     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 10:02:07 by elgrusko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_verif.h"

int			ft_sudoku(int **sudoku, int position)
{
	int i;
	int j;
	int k;

	i = position / 9;
	j = position % 9;
	k = 1;
	if (position == 81)
		return (1);
	if (sudoku[i][j] != 0)
		return (ft_sudoku(sudoku, position + 1));
	while (k <= 9)
	{
		if (on_line(k, sudoku, i) && on_column(k, sudoku, j)
		&& on_block(k, sudoku, i, j))
		{
			sudoku[i][j] = k;
			if (ft_sudoku(sudoku, position + 1))
				return (1);
		}
		k++;
	}
	sudoku[i][j] = 0;
	return (0);
}
