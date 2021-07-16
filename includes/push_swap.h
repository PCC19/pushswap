/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:42:01 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/16 19:38:52 by pcunha           ###   ########.fr       */
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


#endif
