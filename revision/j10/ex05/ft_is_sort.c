/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_sort.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 16:01:50 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 14:43:45 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while ((i < length) && (f(tab[i], tab[i + 1]) >= 0))
		i++;
	if (i != length)
	{
		i = 0;
		while (i < length)
		{
			if (f(tab[i], tab[i + 1]) <= 0)
				return (0);
			i++;
		}
	}
	return (1);
}
