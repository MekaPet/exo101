/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   calcul.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 18:12:07 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 13:23:15 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_add(int a, int b)
{
	int res;

	res = 0;
	res = a + b;
	return (res);
}

int	ft_sous(int a, int b)
{
	int res;

	res = 0;
	res = a - b;
	return (res);
}

int	ft_div(int a, int b)
{
	int res;

	res = 0;
	res = a / b;
	return (res);
}

int	ft_mult(int a, int b)
{
	int res;

	res = 0;
	res = a * b;
	return (res);
}

int	ft_mod(int a, int b)
{
	int res;

	res = 0;
	res = a % b;
	return (res);
}
