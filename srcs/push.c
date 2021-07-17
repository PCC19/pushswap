/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 17:27:45 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/17 18:14:05 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_dlist **to, t_dlist **from)
{
	t_dlist *element;

	if (*from != NULL)
	{
		element = *from;

		// tira elemento do from
		*from = (*from)->next;
		(*from)->prev = NULL;

		// Adiciona elemento ao to
		if (*to != NULL)
			(*to)->prev = element;
		element->next = *to;
		element->prev = NULL;
		*to = element;
	}
}
