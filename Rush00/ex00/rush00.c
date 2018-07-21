/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matheme <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 11:35:23 by matheme      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 15:43:54 by matheme     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char a, char b, char c, int x)
{
	int i_x;

	i_x = 0;
	while (i_x++ < x)
	{
		if (i_x == 1)
			ft_putchar(a);
		else if (i_x != x)
			ft_putchar(b);
		else
			ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i_y;

	i_y = 0;
	while (i_y++ < y)
	{
		if (i_y == 1)
			ft_print('o', '-', 'o', x);
		else if (i_y != y)
			ft_print('|', ' ', '|', x);
		else
			ft_print('o', '-', 'o', x);
	}
}
