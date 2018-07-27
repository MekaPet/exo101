/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 10:08:48 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 13:19:41 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int					ft_strlen(char *str)
{
	int				a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlen;

	i = 0;
	destlen = 0;
	while (dest[destlen])
		destlen++;
	while (i < (size - destlen - 1) || src[i])
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	dest[destlen] = src[i];
	return (destlen + i);
}
