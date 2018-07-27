/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_max.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 14:11:24 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 14:11:58 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int i;
	int r;

	i = 0;
	r = tab[0];
	while (i < length)
	{
		if (r < tab[i])
			r = tab[i];
		i++;
	}
	return (r);
}