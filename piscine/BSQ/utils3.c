/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   utils3.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <bjuarez@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 23:15:50 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 23:34:14 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int			ft_check_chars_first_line(char **tab)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (tab[0][i] != '\n')
	{
		if (tab[j][i] == '\0')
			return (-1);
		i++;
	}
	g_full = tab[j][i - 1];
	g_obst = tab[j][i - 2];
	g_empt = tab[j][i - 3];
	if ((tab[j][i - 4] >= '9') || (tab[j][i - 4] <= '0'))
		return (-1);
	return (0);
}

int			ft_subcheck_tab(char **tab, int z)
{
	int		i;
	int		j;

	while (tab[j])
	{
		i = 0;
		while (tab[j][i] != '\n')
		{
			if (tab[j][i] == g_obst || tab[j][i] == g_empt)
				i++;
			else if (i > z)
				return (-1);
		}
		if (z != i)
			return (-1);
		j++;
	}
	g_or_x = i;
	g_or_y = j - 1;
	return (0);
}

int			ft_check_tab(char **tab)
{
	int		i;
	int		j;
	int		z;

	j = 1;
	i = 0;
	while (tab[j][i] != '\n')
		i++;
	z = i;
	ft_check_chars_first_line(tab);
	if (ft_sucheck_tab(tab, z) != 0)
		return (-1);
	if (j - 1 != ft_check_first_line(tab))
		return (-1);
	else
		return (0);
}
