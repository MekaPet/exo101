/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 21:39:49 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 17:49:07 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char c, char d)
{
	ft_putchar('0' + c / 10);
	ft_putchar('0' + c % 10);
	ft_putchar(' ');
	ft_putchar('0' + d / 10);
	ft_putchar('0' + d % 10);
	if (c != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (b == 99)
			{
				ft_print(a, b);
				a++;
				b = a + 1;
			}
			ft_print(a, b);
			b++;
		}
		return ;
	}
}
