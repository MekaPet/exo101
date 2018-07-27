/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sudoku.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 09:35:46 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 10:40:34 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int        validate(int **numbers, int row, int col, int value)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (i < 9)
    {
      if ((numbers[i][col] == value) || (numbers[row][i] == value))
	return (0);
      i  = 1;
    }
  i = 0;
  while (i < 3)
    {
      j = 0;
      while (j < 3)
	{
	  if (numbers[row - (row % 3) + i][col - (col % 3) + j] == value)
	    return (0);
	  j++;
	}
      i++;
    }
  return (1);
}

char	ft_solve_sudoku(char **numbers, int value)
{
  int i;
  int x;
  int y;

  i = 1;
  x = value / 9;
  y = value % 9;
  if (value == 81)
    return (1);
  if (numbers[y][x] != '.')
    return (solve_sudoku(numbers, (value + 1)));
  while (i < 10)
    {
      if (validate(numbers, y, x, i))
	{
	  numbers[y][x] = i;
	  if (solve_sudoku(numbers, (value + 1)))
	    return (1);
	  else
	    numbers[y][x] = 0;
	}
      i++;
    }
  return (0);
}
