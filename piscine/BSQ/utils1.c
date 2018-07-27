/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   utils.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <bjuarez@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 23:07:20 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 23:13:50 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int			ft_atoi(char *str)
{
	int		index;
	long	nb;
	int		neg;

	index = 0;
	neg = 0;
	nb = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == 45 || str[index] == 43)
	{
		if (str[index] == 45)
			neg = 1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		nb = (nb * 10) + (str[index] - 48);
		index++;
	}
	if (neg == 1)
		nb = -nb;
	return (nb);
}

int			ft_cmp_val(int **tab, int i, int j)
{
	if (tab[i][j - 1] <= tab[i - 1][j])
	{
		if (tab[i][j - 1] <= tab[i - 1][j - 1])
			return (tab[i][j - 1]);
	}
	else if (tab[i - 1][j] <= tab[i][j - 1])
	{
		if (tab[i - 1][j] <= tab[i - 1][j - 1])
			return (tab[i - 1][j]);
	}
	return (tab[i - 1][j - 1]);
}

int			**find_largest_nb(int **src)
{
	int		i;
	int		j;
	int		res;

	i = 0;
	res = 0;
	while (++i < g_or_y)
	{
		j = -1;
		while (++j < g_or_x)
		{
			if (j == 0)
				j++;
			if (src[i][j] > 0)
				src[i][j] = 1 + ft_cmp_val(src, i, j);
			if (src[i][j] > res)
			{
				res = src[i][j];
				g_x = j;
				g_y = i;
				g_res = res;
			}
		}
	}
	return (src);
}

int			ft_size(char *str, int i)
{
	while (str[i] == '\n')
		str++;
	if (str[i] != '\n' && str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
	}
	return (i);
}

int			ft_count(char *str)
{
	int		i;
	int		word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		while (str[i] == '\n')
			i++;
		if (str[i] != '\n' && str[i])
		{
			while (str[i] != '\n' && str[i])
				i++;
			word_count++;
		}
	}
	return (word_count);
}
