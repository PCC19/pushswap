/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:27:18 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/20 18:30:14 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	dlst_max(t_dlist *list)
{
	double curr_max;

	curr_max = -1;
	while (list != NULL)
	{
		printf("list: %f\t\t curr_min: %f\n", *(double*)list->content, curr_max);
		if (*(double*)list->content > curr_max)
			curr_max = *(double*)list->content;
		list = list->next;
	}
	return (curr_max);
}
