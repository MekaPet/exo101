/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 17:35:56 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 18:09:39 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int i;
	int n;
	int sign;
	unsigned int nb_total;

	sign = 0;
	n = 0;
	i = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}


	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = 1;
		}
		i++;
	}


	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			n = 10 * n + (str[i] - '0');
		}
		else
		{
			while (str[i])
			{
				i++;
			}
		}
		i++;
	}


	if (sign == 1)
	  {
	    n = -n;
	  }
	return (n);
}

int main(void)
{
  char a[] = {"\n  -123   123"};

  printf("%d , %d", ft_atoi(a), atoi(a));
  return (0);
}
