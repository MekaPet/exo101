/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush03.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 18:26:36 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 08:45:47 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_rush(int x2, int y2, int c_x2, int c_y2)
{
	if (c_x2 > 1 && c_x2 < x2 && c_y2 == 1)
		ft_putchar('B');
	if (c_x2 == 1 && c_y2 > 1 && c_y2 < y2 && x2 != 1)
		ft_putchar('B');
	if (c_x2 == x2 && c_y2 > 1 && c_y2 < y2)
		ft_putchar('B');
	if (c_x2 > 1 && c_y2 > 1 && c_x2 < x2 && c_y2 < y2)
		ft_putchar(' ');
	if (c_x2 > 1 && c_x2 < x2 && c_y2 == y2 && y2 != 1)
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int c_x;
	int c_y;

	c_x = 1;
	c_y = 1;
	if (x > 0 && y > 0)
	{
		while (c_y <= y)
		{
			while (c_x <= x)
			{
				if ((c_x == 1 && c_y == 1) ||
				(c_x == 1 && c_y == y))
					ft_putchar('A');
				if ((c_x == x && c_y == 1 && x != 1) ||
				(c_x == x && c_y == y && x != 1))
					ft_putchar('C');
				put_rush(x, y, c_x, c_y);
				c_x++;
			}
			ft_putchar('\n');
			c_x = 0;
			c_y++;
		}
	}
}
