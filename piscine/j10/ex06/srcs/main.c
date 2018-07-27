/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 17:12:37 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 13:32:58 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_do_op(char *str, char *op, char *str2)
{
  int a;
  int b;

  a = ft_atoi(str);
  b = ft_atoi(str2);
  if (*op == '+')
    return (ft_add(a, b));
  else if (*op == '-')
    return (ft_sous(a, b));
  else if (*op == '*')
    return (ft_mult(a, b));
  else if (*op == '/')
    return (ft_div(a, b));
  else if (*op == '%')
    return (ft_mod(a, b));
  else if (*op == "")
    return (0);
}

int	main(int argc, char **argv)
{
  int i;
  int *res;

  i = 0;
  if (argc == 4)
    {
      *res = ft_do_op(argv[1], argv[2], argv[3]);
      ft_putnbr(*res);
    }
  return (0);
}
