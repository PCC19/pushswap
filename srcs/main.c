/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 22:19:20 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/22 22:24:08 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	double	*array;
	int		n_array;
	t_dlist	*a;
	t_dlist	*b;
	
	parse_inputs(argc, argv, &array, &n_array);
	check_repeated(array, n_array);
	a = NULL;
	b = NULL;
	a = push_array_into_stack(array, n_array, a);
	normalize_array(&array, n_array);
	if (is_stack_sorted(a))
		exit(0);
	if (n_array == 2)
	{
		if (!is_stack_sorted(a))
			ra(&a, &b);
	}
	else if (n_array == 3)
		sort_3(&a, &b);
	else if (n_array == 5)
		sort_5(&a, &b);
	else
		radix_sort(&a, &b);
	u_free_dlst(a);
	u_free_dlst(b);
	free(array);
	return (0);
}
