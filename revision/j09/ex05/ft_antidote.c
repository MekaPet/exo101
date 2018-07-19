/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_antidote.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 14:15:04 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 14:43:50 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((k < i && k > j) || (k > i && k < j))
		return (k);
	else if ((i < k && i > J) || (i > k && i < j))
		return (i);
	else if ((j < k && j > i) || (j > k && j < i))
		return (j);
	else if (i = j)
		return (j);
	else if (j = k)
		return (j);
}
