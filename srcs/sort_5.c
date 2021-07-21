/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:46:23 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/21 18:08:50 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int find_index(double value, t_dlist *list)
{
	int	i;

	i = 0;
	while (list != NULL)
	{
		if (*(double*)list->content == value)
			return (i);
		i++;
		list = list->next;
	}
	return (i);
}
		
void	sort_5(t_dlist **a, t_dlist **b)
{
	(void) b;
	int idx;

	// find index of zero
	idx = find_index(0, *a);
	printf("idx: %d\n", idx);
	idx = find_index(1, *a);
	printf("idx: %d\n", idx);

	
	// calculate num of ra / rra
	// pb
	// find index of one
	// calculate num of ra / rra
	// pb
	// sort 3
	// pa pa


}

