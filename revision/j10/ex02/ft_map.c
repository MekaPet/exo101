/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 14:29:05 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 15:09:58 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab_ret;

	if (!(tab_ret = (int)malloc(sizeof(int) * length)))
		return (0);
	i = 0;
	while (i < length)
	{
		tab_ret[i] = f(tab[i]);
		i++;
	}
	return (tab_ret);
}
