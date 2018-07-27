/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 16:43:04 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 17:05:26 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int n;
	int result;

	n = 2;
	if (nb > 1)
	{
		while (n < nb)
		{
			if (nb % n == 0)
				return (0);
			n++;
		}
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_find_next_prime(int nb)
{
	int n;
	int prime;

	n = 1;
	prime = 0;
	if (n == ft_is_prime(nb))
	{
		nb++;
		while (prime == ft_is_prime(nb))
		{
			nb++;
		}
		return (nb);
	}
}
