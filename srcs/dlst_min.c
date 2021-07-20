/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:57:59 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/20 21:41:01 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	dlst_min(t_dlist *list)
{
	double curr_min;

	curr_min = INT_MAX;
	while (list != NULL)
	{
		if (*(double*)list->content < curr_min)
			curr_min = *(double*)list->content;
		list = list->next;
	}
	return (curr_min);
}
