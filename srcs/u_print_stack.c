/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_print_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 01:21:57 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/17 01:26:56 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	u_print_stack(t_dlist *list)
{
	t_dlist *cursor;

	cursor = last_dlst(list);
	write(1, "|: ",3);
	while(cursor != NULL)
	{
		printf("%d ", *(int *)cursor->content);
		cursor = cursor->prev;
	}
	printf("\n");
}
