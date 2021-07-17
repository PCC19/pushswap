/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:31:40 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/17 19:44:30 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_dlist **a)
{
	t_dlist *last;
	t_dlist *second;

	if (*a != NULL && (*a)->next != NULL)
	{
		last = last_dlst(*a);
		second = (*a)->next;
		(*a)->next->prev = NULL;
		(*a)->next = NULL;
		(*a)->prev = last;
		last->next = (*a);
		(*a) = second;
	}
}
