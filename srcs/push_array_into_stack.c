/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_array_into_stack.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 01:48:42 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/18 18:05:49 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist	*push_array_into_stack(int *array, int n_array, t_dlist *list)
{
	int i;

	i = n_array - 1;
	while (i >= 0)
	{
		list  = ft_dlst_push(&array[i], list);
//		printf("%d: content %d\n", i, *(int*)list->content);
		i--;
	}
	return (list);
}
