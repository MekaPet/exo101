/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 17:12:37 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 13:02:46 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft.h"

int	eval_expr(char *str)
{
  int res;
  char *res_str;

  res = 0;
  res_str = ft_split_whitespaces(str);
  return (0);
}

int	main(int ac, char **av)
{
  if (ac > 1)
    {
      ft_putnbr(eval_expr(av[1]));
      ft_putchar(’\n’);
    }
  return (0);
}
