/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:48:01 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/17 19:41:21 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_dlist **a)
{
	t_dlist *last;

	if (*a != NULL && (*a)->next != NULL)
	{
		last = last_dlst(*a);
		last->prev->next = NULL;
		last->next = (*a);
		(*a)->prev = last;
		last->prev = NULL;
		(*a) = last;
	}
}