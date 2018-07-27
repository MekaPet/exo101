/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 09:04:47 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 20:11:31 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_atoi_sign(char sign2, char *str, int i)
{
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign2 = 1;
		i++;
	}
	return (sign2);
}

int	ft_atoi(char *str)
{
	int i;
	int n;
	int sign;

	sign = 0;
	n = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = ft_atoi_sign(sign, str, i);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			n = 10 * n + (str[i] - '0');
		else
		{
			while (str[i])
				i++;
		}
		i++;
	}
	if (sign == 1)
		n = -n;
	return (n);
}
