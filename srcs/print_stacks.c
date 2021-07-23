/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 19:30:10 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/17 19:32:31 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_dlist *a, t_dlist *b)
{
	u_print_stack(a,'a');
	u_print_stack(b,'b');
	printf("------------------\n");
}