/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 19:11:09 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/17 19:23:59 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_dlist **a)
{
	t_dlist *second;
	t_dlist *third;

	if ((*a) != NULL && (*a)->next != NULL)
	{
		second = (*a)->next;
		third = second->next;
		if (third != NULL)
		{
			third->prev = (*a);
			(*a)->next = third;
		}
		else
			(*a)->next = NULL;
		second->next = (*a);
		(*a)->prev = second;
		second->prev = NULL;
		(*a) = second;
	}
}
