/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_params.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 20:15:46 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 13:50:24 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*new;
	int		i;

	list = ft_create_elem(NULL);
	if (ac <= 1)
		return (list);
	else if (ac == 2)
		return (new = ft_create_elem(av[1]));
	else
	{
		list = ft_create_elem(av[2]);
		new = list;
		i = 3;
		while (i < ac)
		{
			list->next = ft_create_elem(av[i]);
			list = list->next;
			i++;
		}
		list->next = ft_create_elem(av[1]);
	}
	return (new);
}
