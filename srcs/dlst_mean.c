/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_mean.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:32:52 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/22 22:36:24 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	dlst_mean(t_dlist *list)
{
	double	sum;
	double	count;

	sum = 0;
	count = 0;
	while (list != NULL)
	{
		sum += *(double *)list->content;
		count++;
		list = list->next;
	}
	return (sum / count);
}
