/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:02:51 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/20 21:39:18 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_dlist **a, t_dlist **b)
{
	double	max;
	int		n_bits;
	int		i;


	max = dlst_max(*a);
	n_bits = most_significant_bit_position(max);
	i = 0;
	while(i < n_bits)
	{
		if (ft_get_bit_double(*(double*)(*a)->content, i) == 0)
			pb(a,b);
		else
			ra(a, b);
		i++;
		print_stacks(*a,*b);
	}
}

	
// loop
	// pega 1o bit
	// joga 0 para b / joga 1 para fundo a
	// volta tudRR

