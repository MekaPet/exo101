/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespace.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 12:34:26 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 13:27:54 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft.h"

int			ft_size(char *str)
{
	int		i;

	i = 0;
	while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i])
		str++;
	if (!(str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i])
	{
		while (!(str[i] == '\n' || str[i] == '\t' ||
		str[i] == ' ') && str[i])
			i++;
	}
	return (i);
}

int			ft_count(char *str)
{
	int		i;
	int		word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i])
			str++;
		if (!(str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i])
		{
			while (!(str[i] == '\n' || str[i] == '\t' ||
			str[i] == ' ') && str[i])
				i++;
			word_count++;
		}
	}
	return (word_count);
}

char		**ft_split_whitespaces(char *str)
{
	int		i;
	int		index2;
	int		nbr_word;
	char	**tab;
	char	*tab_word;

	i = 0;
	index2 = 0;
	nbr_word = ft_count(str);
	tab = (char**)malloc(sizeof(char*) * (nbr_word + 1));
	while (index2 < nbr_word)
	{
		tab_word = (char*)malloc(sizeof(char) * (ft_size(str) + 1));
		while ((str[0] == '\n' || str[0] == '\t' || str[0] == ' ') && str[0])
			str++;
		while (!(str[0] == '\n' || str[0] == '\t' || str[0] == ' ') && str[0])
			tab_word[i++] = *str++;
		tab_word[i] = '\0';
		tab[index2++] = tab_word;
		free(tab_word);
		i = 0;
	}
	tab[index2] = 0;
	return (tab);
}
