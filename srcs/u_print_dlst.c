/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_print_dlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 19:17:40 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/16 20:23:05 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_node(t_dlist *list)
{
	printf("content:\t\t%d\n", *(int*)list->content);
	printf("index:\t\t%d\n", list->index);
	printf("next:\t\t%p\n", list->next);
	printf("prev:\t\t%p\n", list->prev);
}

static void	print_content(t_dlist *list)
{
	printf("%d\t", *(int*)list->content);
}

void	u_print_dlst(t_dlist *list)
{
	(void) print_node;
	printf("topo ");
	print_content(list);
	list = list->next;
	while (list != NULL)
	{
		print_content(list);
		list = list->next;
	}
	printf("\n");
}
