/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:42:01 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/17 19:59:39 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <limits.h>

/*
** Data Structures 
*/




/*
** Functions
*/
char	*remove_quotes(char *str);
void	bye(void);
void	u_print_array_bi(char **s);
int		parse_inputs(int argc, char *argv[], double **array, int *n_array);
int		is_integer(char *s);
double	*populate_array(int argc, char **array_bi);
void	q_sort(double *array, int left, int right);
void	check_repeated(double *array, int n_array);
t_dlist	*ft_dlst_push(int *value, t_dlist *list);
void	u_print_dlst(t_dlist *list);
void	u_free_dlst(t_dlist *list);
int		len_dlst(t_dlist *list);
t_dlist	*last_dlst(t_dlist *list);
t_dlist	*first_dlst(t_dlist *list);
void	u_print_stack(t_dlist *list, char c);
t_dlist	*push_array_into_stack(int *array, int n_array, t_dlist *list);
void	push(t_dlist **to, t_dlist **from);
void	rotate(t_dlist **a);
void	reverse_rotate(t_dlist **a);
void	swap(t_dlist **a);
void	print_stacks(t_dlist *a, t_dlist *b);
void	pa(t_dlist **a, t_dlist **b);
void	pb(t_dlist **a, t_dlist **b);
void	sa(t_dlist **x);
void	sb(t_dlist **x);











#endif
