/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stack_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:46:17 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/20 18:52:21 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_stack_sorted(t_dlist *list)
{
	if (list == NULL || list->next == NULL)
		return(1);
	else
	{
		list = list->next;
		while (list != NULL)
		{
			if(*(double*)list->content < *(double*)list->prev->content)
				return (0);
			list = list->next;
		}
	}
	return (1);
}
