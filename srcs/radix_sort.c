/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:02:51 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/20 21:55:52 by pcunha           ###   ########.fr       */
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
		pb(a,b);
		cursor = cursor->next;
	}
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
		print_stacks(*a,*b);
	while(i < 1)
	{
		push_on_bit(a, b, stack_size, i);
		i++;
	}
	return_to_a(a, b);
	print_stacks(*a,*b);

}

	
// loop
	// pega 1o bit
	// joga 0 para b / joga 1 para fundo a
	// volta tudRR

