/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:46:23 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/21 18:18:02 by pcunha           ###   ########.fr       */
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

static void	handle_0(t_dlist **a, t_dlist **b, int idx)
{
	// calculate num of ra / rra
		if (idx == 4)
			rra(a);
		if (idx == 5)
		{
			rra(a);
			rra(a);
		}
		if (idx == 1)
			ra(a ,b);
		if (idx == 2)
		{
			ra(a, b);
			ra(a, b);
		}
		pb(a, b);
}

static void	handle_1(t_dlist **a, t_dlist **b, int idx)
{
	// calculate num of ra / rra
		if (idx == 1)
			ra(a, b);
		if (idx == 3)
			rra(a);
		if (idx == 2)
		{
			ra(a ,b);
			ra(a ,b);
		}
		pb(a, b);
}
		
void	sort_5(t_dlist **a, t_dlist **b)
{
	(void) b;
	int idx;

	idx = find_index(0, *a);
	handle_0(a, b, idx);
	idx = find_index(1, *a);
	handle_1(a, b, idx);
	sort_3(a, b);
	pa(a ,b);
	pa(a, b);
}
