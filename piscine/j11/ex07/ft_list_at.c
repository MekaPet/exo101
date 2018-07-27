/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_at.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 14:14:16 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 15:53:08 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list				*ft_list_at(t_list **begin_list, unsigned int nbr)
{
	t_list			*temp;
	unsigned int	i;

	i = 1;
	temp = NULL;
	if (*begin_list == NULL)
		return (temp);
	temp = *begin_list;
	while (i < nbr - 1 && *begin_list != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
