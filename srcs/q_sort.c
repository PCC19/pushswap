/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   q_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 16:31:32 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/22 22:49:44 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	partition(double *array, int left, int right)
{
	int		i;
	int		j;
	double	pivot;
	double	temp;

	pivot = array[left];
	i = left;
	j = left + 1;
	while (j <= right)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
		j++;
	}
	temp = array[left];
	array[left] = array[i];
	array[i] = temp;
	return (i);
}

void	q_sort(double *array, int left, int right)
{
	int	index_pivot;

	if (left < right)
	{
		index_pivot = partition(array, left, right);
		q_sort(array, left, index_pivot - 1);
		q_sort(array, index_pivot + 1, right);
	}
}
