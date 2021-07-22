/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 16:38:47 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/22 22:54:42 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	case_1(t_dlist **a, t_dlist **b, double second, double min)
{
	ra(a, b);
	if (second != min)
		sa(a, b);
}

static void	case_2(t_dlist **a, t_dlist **b, double first, double min)
{
	rra(a);
	if (first == min)
		sa(a, b);
}

void	sort_3(t_dlist **a, t_dlist **b)
{
	double	min;
	double	max;
	double	first;
	double	second;
	double	third;

	if (len_dlst(*a) >= 3)
	{
		first = *(double *)(*a)->content;
		second = *(double *)((*a)->next)->content;
		third = *(double *)((*a)->next->next)->content;
		min = dlst_min(*a);
		max = dlst_max(*a);
		if (first == max)
			case_1(a, b, second, min);
		else if (second == max)
			case_2(a, b, first, min);
		else if (second == min && third == max)
			sa(a, b);
	}
}
