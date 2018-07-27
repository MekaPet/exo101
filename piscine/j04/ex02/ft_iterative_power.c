/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 13:43:21 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 14:14:37 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;
	int p;

	p = 1;
	if (power < 0)
	{
		result = 0;
	}
	else if (power == 0)
	{
		result = 1;
	}
	else
	{
		result = nb;
		while (p != power)
		{
			result = result * nb;
			p++;
		}
	}
	return (result);
}
