/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_free_dlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 19:36:59 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/22 22:58:54 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	u_free_dlst(t_dlist *list)
{
	t_dlist	*temp;

	while (list != NULL)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}
