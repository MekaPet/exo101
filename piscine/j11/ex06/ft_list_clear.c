/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_clear.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 20:37:10 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 15:44:59 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *current;
	t_list *next;

	current = *begin_list;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*begin_list = NULL;
}
