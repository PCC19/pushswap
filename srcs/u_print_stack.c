/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_print_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 01:21:57 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/20 23:11:37 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//static void printBin(int num, int bits)
//{
//        int pow;
//        int mask = 1 << (bits - 1);
//
//        for(pow=0; pow<bits; pow++)
//        {
//                printf("%d", mask & num);
//                num <<= 1;
//        }
//        putchar(' ');
//}

void	u_print_stack(t_dlist *list, char c)
{
	t_dlist *cursor;
	double byte;

	cursor = last_dlst(list);
	write(1, "|",1);
	write(1, &c, 1);
	write(1, ": ",2 );
	while(cursor != NULL)
	{
		byte = *(double*)cursor->content;
		//ft_putnbr_base(byte, "01");ft_putchar('\t');
		printf("%.0f ", byte); 
		cursor = cursor->prev;
	}
	printf("\n");
}
