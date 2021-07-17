/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:31:40 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/17 18:46:28 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_dlist **a)
{
	t_dlist *last;

	if (*a != NULL)
	{
		last = last_dlst(*a);
		last->next = *a;
		(*a) = (*a)->next;
		(*a)->prev = NULL;
		last->next->prev = last;
		last->next->next = NULL;
	}
}
