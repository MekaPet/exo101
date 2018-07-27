/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 16:20:27 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 22:05:09 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int n;
	int result;

	n = 3;
	if (nb > 1)
	{
		if (nb % 2 == 0)
			return (0);
		if (n > (nb / 2 + 1))
			return (0);
		if (nb % 5 == 0)
		  return (0);
		while (n < nb)
		{
			if (nb % n == 0)
				return (0);
			n = n + 2;
		}
		return (1);
	}
	else
	{
		return (0);
	}
}
