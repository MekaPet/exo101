/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 09:46:36 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 10:36:49 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(int ac, char **av)
{
	char	**tab;
	if (ac > 1)
	{
		tab = ft_split_whitespaces(av[1]);
		while (*tab)
		{
			printf("%s", *tab);
			tab++;
		}
	}
	return (0);
}
