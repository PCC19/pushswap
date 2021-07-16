/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:48:47 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/16 19:14:54 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlst_push(int value, t_dlist *list)
{
	t_dlist	*node;

	// Se lista estiver vazia
	if (list == NULL)
	{
		list = ft_dlst_create(value);
	}
	// Se lista ja existir
	else
	{
		node = (t_dlist *)malloc(sizeof(t_dlist));
		node->content = value;
		node->next = list;
		node->previous = NULL;
	}
}
