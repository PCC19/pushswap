/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_dlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 01:09:38 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/22 22:39:21 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist	*last_dlst(t_dlist *list)
{
	if (list == NULL)
		return (list);
	while (list->next != NULL)
		list = list->next;
	return (list);
}
