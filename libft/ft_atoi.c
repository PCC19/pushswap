/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 18:34:35 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/15 23:18:22 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define INT_MAX 2147483647

double	ft_atoi(const char *str)
{
	double	res;
	double	neg;

	neg = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		++str;
	}
	return (res * neg);
}
