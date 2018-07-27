/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 12:37:17 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 17:57:22 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int facto;

	facto = 0;
	if (nb >= 0 || nb > 12)
	{
		if (nb == 0)
			return (1);
		facto = nb;
		while (nb > 1)
		{
			nb--;
			facto = facto * nb;
		}
	}
	else
	{
		facto = 0;
	}
	return (facto);
}
