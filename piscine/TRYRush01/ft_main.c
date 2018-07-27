/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sudoku_resolve.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 19:03:36 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 10:57:31 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_verif_sudoku.c"
#include "ft_sudoku.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i])
    {
      ft_putchar(str[i]);
      i++;
    }
}

int	ft_strlen_hard(char **str)
{
  int i;
  int j;
  int count;

  i = 1;
  count = 0;
  while (i < 10)
    {
      j = 0;
      while (j < 9)
	{
	  if (str[i][j] != 0)
	    {
	      j++;
	      count++;
	    }
	  else
	    return (0);
	}
    i++;
    }
  return (count);
}

int	main(int argc, char **argv)
{
  int x;
  int y;
  char **tab;

  y = 1;
  if (argc == 10 && ft_strlen_hard(argv) == 81)
    {
	ft_solve_sudoku(argv, 0);
      while (y < 9)
	{
	  x = 0;
	  while (x < 9)
	    {
	      ft_putchar(argv[y][x]);
	      x++;
	    }
	  y++;
	}
    }
  else
      ft_putstr("Error\n"); 
  return (0);
}
