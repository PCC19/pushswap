/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:42:01 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/16 16:52:13 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"
#include <stdio.h>
#include <limits.h>

char *remove_quotes(char *str);
void	bye(void);
void	u_print_array_bi(char **s);
int	parse_inputs(int argc, char *argv[], double **array, int *n_array);
int	is_integer(char *s);
double *populate_array(int argc, char **array_bi);
void	q_sort(double *array, int left, int right);

#endif

