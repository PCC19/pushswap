/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   most_significant_bit_position.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:05:36 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/20 21:27:54 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	most_significant_bit_position(double num)
{
	double	i;
	i = 63;
	while (ft_get_bit_double(num, i) != 1)
		i--;
	return (i);
}

// 1 2 3 4 5 6 7 8
// 8 7 6 5 4 3 2 1 
