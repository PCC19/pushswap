/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 22:48:14 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/21 17:28:23 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double *populate_array(int argc, char **array_bi)
{
	int		i;
	double		*array;

	array = (double*)malloc(sizeof(double) * (argc - 1));

	i = 0;
	while(i < argc)
	{
		if (is_integer(array_bi[i]))
		{
			array[i] = ft_atoi(array_bi[i]);
		}
		if(array[i] < INT_MIN || array[i] > INT_MAX || !is_integer(array_bi[i]))
		{
			free(array);
			if (argc < 3)
				u_free_array_bi(array_bi);
			bye();
		}
		i++;
	}
	return (array);
}
