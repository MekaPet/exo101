/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_scrambler.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 15:23:58 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 16:24:20 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int a1;
	int b1;
	int c1;
	int d1;

	b1 = *b;
	d1 = ****d;
	***a = b1;
	*b = d1;
	*******c = ***a;
	****d = *******c;
}
