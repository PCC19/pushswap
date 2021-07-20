/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:48:47 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/20 18:23:29 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist	*ft_dlst_push(double *value, t_dlist *list)
{
	t_dlist	*node;
	(void) node;

	// Se lista estiver vazia
	if (list == NULL)
	{
		list = ft_dlst_create(value);
		return (list);
	}
	// Se lista ja existir
	else
	{
		node = (t_dlist *)malloc(sizeof(t_dlist));
		node->content = value;
		node->index = list->index + 1;
		node->next = list;
		node->prev = NULL;
		list->prev = node;
		return (node);
	}
}
