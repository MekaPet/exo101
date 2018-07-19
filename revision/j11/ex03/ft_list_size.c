/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_size.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 19:44:50 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 14:29:14 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		i;

	i = 1;
	temp = begin_list;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
