/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_reverse.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 14:44:11 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 15:20:21 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *temp;
	t_list *temp2;
	t_list *temp3;

	temp = *begin_list;
	while (temp != NULL)
	{
		temp2 = temp->next;
		temp3 = temp2->next;
		temp->next = temp3;
		temp2->next = *begin_list;
	}
	temp->next = NULL;
}
