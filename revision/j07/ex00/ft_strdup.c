/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 14:05:27 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 19:18:09 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char		*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	j = ft_strlen(src);
	str = (char*)malloc(sizeof(*src) * j + 1);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	if (str[i] == '\0')
		return (str);
	return (0);
}
