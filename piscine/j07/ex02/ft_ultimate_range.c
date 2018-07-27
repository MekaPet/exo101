/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 19:19:54 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 15:36:06 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (!(*range = (int*)malloc(sizeof(*range) * (max - min + 1))))
		return (0);
	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (**range);
	}
	while (min < max)
	{
		*range[i] = min;
		i++;
		min++;
	}
	*range[i] = '\0';
	return (**range);
}
