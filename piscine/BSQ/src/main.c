/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 15:22:51 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 22:17:09 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft.h"

void		ft_return_tab(void)
{
	int		ret;
	char	buff[1 + 1];

	while ((ret = read(0, buff, 1)))
	{
		buff[ret] = '\0';
		write(1, buff, 1);
	}
}

int			main(int ac, char **av)
{
	char	**str;
	int		i;

	i = 1;
	if (ac == 1)
	{
		ft_return_tab();
	}
	else if (ac > 1)
	{
		while (av[i])
		{
			ft_get_grid(av[i], ft_get_x(av[i]),
					ft_atoi(ft_get_line1(av[i])), ft_get_line1(av[i]));
			str = ft_get_tab(ft_get_x(av[i]),
					ft_atoi(ft_get_line1(av[i])), ft_get_line1(av[i]));
			ft_print_sqr(str, ft_atoi(ft_get_line1(av[i])));
			i++;
		}
	}
	return (0);
}
