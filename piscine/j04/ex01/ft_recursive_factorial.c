/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 13:06:27 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 18:00:34 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int facto;

	facto = 0;
	if (nb >= 0 || nb > 12)
	{
		if (nb == 0)
			return (1);
	  	facto = nb;
		if (nb > 1)
		{
			nb--;
			facto = facto * ft_recursive_factorial(nb);
		}
	}
	else
	{
		facto = 0;
	}
	return (facto);
}
