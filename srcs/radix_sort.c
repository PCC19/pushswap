/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:02:51 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/20 22:08:56 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_on_bit(t_dlist **a, t_dlist **b, int stack_size, int i)
{
	int j;

	j = 0;
	while(j < stack_size)
	{
		if (ft_get_bit_double(*(double*)(*a)->content, i) == 0)
			pb(a,b);
		else
			ra(a, b);
		j++;
	}

}

static void	return_to_a(t_dlist **a, t_dlist **b)
{
	t_dlist *cursor;

	cursor = *b;
	while(cursor != NULL)
	{
		pa(a,b);
		cursor = cursor->next;
	}
	pa(a, b);
}

void	radix_sort(t_dlist **a, t_dlist **b)
{
	double	max;
	int		n_bits;
	int		i;
	int		stack_size;

	stack_size = len_dlst(*a);
	max = dlst_max(*a);
	n_bits = most_significant_bit_position(max);
	i = 0;
//		print_stacks(*a,*b);
	while(i < n_bits)
	{
		push_on_bit(a, b, stack_size, i);
		print_stacks(*a,*b);
		return_to_a(a, b);
		i++;
		print_stacks(*a,*b);
	}
//	print_stacks(*a,*b);

}
