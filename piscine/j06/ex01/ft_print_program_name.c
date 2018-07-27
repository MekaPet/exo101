/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_program_name.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 14:52:12 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 12:47:27 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc >= 1)
	{
		while (argv[0][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
	}
	return (0);
}
