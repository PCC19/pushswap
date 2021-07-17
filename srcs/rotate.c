/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:31:40 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/17 19:00:26 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_dlist **a)
{
	t_dlist *last;

	if (*a != NULL)
	{
		last = last_dlst(*a);
		last->prev->next = NULL;
		(*a)->prev = last;
		last->next = (*a);
		last->prev = NULL;
		(*a) = last;
	}
}
