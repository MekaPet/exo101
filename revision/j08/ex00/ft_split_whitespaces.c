/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 00:57:53 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 11:42:31 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			ft_size(char *str)
{
	int		i;

	i = 0;
	while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i]) // tant que c'est des espace on passe a l'adresse suivante
		str++;
	if (!(str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i]) // ici c'est l'inverse on passe aussi mais on retourne i qui est la longueur du mot
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
	while (str[i]) //tant que ma chaine exist on tourne
	{
		while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i]) // tant que c'est des espace on passe a l'adresse suivante
			str++;
		if (!(str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i]) // ici c'est l'inverse on passe aussi mais on compte plus 1 pour l'equivalent de 1 mot
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
	nbr_word = ft_count(str); //appel ft_count qui compte le nombre de mot
	tab = (char**)malloc(sizeof(char*) * (nbr_word + 1)); //je malloc mon nombre de mot dans mon **tab
	while (index2 < nbr_word)
	{
		tab_word = (char*)malloc(sizeof(char) * (ft_size(str) + 1)); //je malloc mon nombre de lettre pour chaque mot
		while ((str[0] == '\n' || str[0] == '\t' || str[0] == ' ') && str[0]) //s'il y a des espaces et autre on passe a ladresse suivante dans le tableau
			str++;
		while (!(str[0] == '\n' || str[0] == '\t' || str[0] == ' ') && str[0]) //s'il y a des lettre on entre chque lettre dans le tableau 
			tab_word[i++] = *str++;
		tab_word[i] = '\0'; // on met un \0 a la fin
		tab[index2++] = tab_word; // on met chaque mot dans le grand tableau
		i = 0; //i = 0 pour recommencer pour chaque mot
	}
	tab[index2] = 0; // le dernier element est = a 0
	return (tab);
}
