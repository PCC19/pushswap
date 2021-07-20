/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:53:55 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/20 19:45:25 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normalize_array(double **array, int n_array)
{
	int i;
	int	j;
	double *sorted_array;

	sorted_array = (double*)malloc(sizeof(double)*n_array);
	i = -1;
	while(++i < n_array)
		sorted_array[i] = (*array)[i];
	q_sort(sorted_array, 0, n_array - 1);
	i = 0;
	while (i < n_array)
	{
		j = 0;
		while ((*array)[i] != sorted_array[j])
			j++;
		(*array)[i] = j;
		i++;
	}
	free(sorted_array);
}
