/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   utils2.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <bjuarez@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 23:11:41 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 23:20:28 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** Strip '\n' from char *str
*/

char		**ft_split_backslash_n(char *str, int k)
{
	int		i;
	int		index2;
	int		nbr_word;
	char	**tab;
	char	*tab_word;

	i = 0;
	index2 = 0;
	nbr_word = ft_count(str);
	tab = (char**)malloc(sizeof(char*) * (nbr_word + 1));
	while (index2 < nbr_word)
	{
		tab_word = (char*)malloc(sizeof(char) * (ft_size(str, k) + 2));
		while (str[k] == '\n')
			k++;
		while (str[k] != '\n')
			tab_word[i++] = str[k++];
		tab_word[i++] = str[k++];
		tab_word[i++] = '\0';
		tab[index2++] = tab_word;
		i = 0;
	}
	tab[index2] = 0;
	return (tab);
}

int			**ft_convert_tab(char **stdin, int x, int y, char obst)
{
	int		**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(int *) * (y + 1));
	if (tab == NULL)
		return (NULL);
	while (stdin[i])
	{
		j = 0;
		tab[i] = malloc(sizeof(int) * (x + 1));
		while (stdin[i][j] != '\n')
		{
			if (stdin[i][j] == obst)
				tab[i][j] = 0;
			else
				tab[i][j] = 1;
			j++;
		}
		i++;
	}
	return (tab);
}

/*
** Retranspose le tab binaire en tab
**    de char et remplit le BSQ
*/

char		**ft_print_res_final_tab(char **ftab)
{
	int		st_x;
	int		st_y;

	st_x = g_x;
	st_y = g_y;
	ftab[g_y][g_x] = g_full;
	while (g_y > (st_y - g_res))
	{
		while (g_x > (st_x - g_res))
		{
			ftab[g_y][g_x] = g_full;
			g_x--;
		}
		g_x = st_x;
		g_y--;
	}
	return (ftab);
}

/*
** Rempli le tableau de '*'
*/

char		**ft_fill_final_tab(int **tab)
{
	int		i;
	int		j;
	char	**tabf;

	i = 0;
	tabf = malloc(sizeof(char*) * (g_or_y + 1));
	while (i < g_or_y)
	{
		j = 0;
		tabf[i] = malloc(sizeof(char) * (g_or_x + 1));
		while (j < g_or_x)
		{
			if (tab[i][j] == 0)
				tabf[i][j] = g_obst;
			else
				tabf[i][j] = g_empt;
			j++;
		}
		j++;
		tabf[i][j] = '\0';
		i++;
	}
	i++;
	ft_print_res_final_tab(tabf);
	return (tabf);
}

int			ft_check_first_line(char **tab)
{
	int		nb_line;

	nb_line = ft_atoi(tab[0]);
	return (nb_line);
}
