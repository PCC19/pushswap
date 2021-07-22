/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_bit_double.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:26:18 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/22 23:00:16 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_bit_double(double x, int n)
{
	unsigned long long	y;

	y = (unsigned long long)x;
	return ((unsigned long long)(y >> n) & 1);
}
