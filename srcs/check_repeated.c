/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_repeated.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:07:45 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/22 22:35:08 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_repeated(double *array, int n_array)
{
	double	*array_copy;
	int		i;

	array_copy = (double *) malloc (sizeof (double) * n_array);
	ft_memcpy(array_copy, array, n_array);
	q_sort(array_copy, 0, n_array - 1);
	i = 1;
	while (i < n_array)
	{
		if (array[i] == array[i - 1])
		{
			free(array);
			free(array_copy);
			bye();
		}
		i++;
	}
	free(array_copy);
}
