/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 21:10:11 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 21:12:17 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int			ft_atoi(char *str)
{
	int		index;
	long	nb;
	int		neg;

	index = 0;
	neg = 0;
	nb = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == 45 || str[index] == 43)
	{
		if (str[index] == 45)
			neg = 1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		nb = (nb * 10) + (str[index] - 48);
		index++;
	}
	if (neg == 1)
		nb = -nb;
	return (nb);
}
