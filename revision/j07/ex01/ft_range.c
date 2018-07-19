/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 16:22:43 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 18:38:31 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_diffabs(int min, int max)
{
	int diff;

	diff = max - min;
	if (diff < 0)
		diff = -diff;
	return (diff);
}

int		*ft_range(int min, int max)
{
	int i;
	int diff;
	int *str;

	str = NULL;
	diff = ft_diffabs(min, max);
	if (max - 2147483647 > min)
	  return (NULL);
	if (!(str = (int*)malloc(sizeof(*str) * (diff + 1))))
		return (NULL);
	i = 0;
	if (max <= min)
		return (str);
	while (i < diff + 1)
	{
		str[i] = min;
		i++;
		min++;
	}
	str[i] = '\0';
	return (str);
}
