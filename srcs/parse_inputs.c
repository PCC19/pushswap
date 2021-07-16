/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 23:21:37 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/16 17:02:36 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_inputs(int argc, char *argv[], double **array, int *n_array)
{
	char *cleaned_str = NULL;
	char **array_bi;
	int	i;

	if (argc == 1)
		bye();
	
	if (argc == 2)
	{
		cleaned_str = remove_quotes(argv[1]);
		array_bi = ft_split(cleaned_str, ' ');
		i = 0;
		while (array_bi[i] != NULL)
			i++;
		(*array) = populate_array(i, array_bi);
		*n_array = i - 1;
		free(cleaned_str);
		u_free_array_bi(array_bi);
	}

	if (argc > 2)
	{
		cleaned_str = NULL;
		(*array) = populate_array(argc, &argv[1]);
		*n_array = argc - 1;
	}


		//Input nao tem aspas
		//	Split por espaco
		//	Loop ate final do string
		//		Converte para int
		//		Checa se eh int e menor que maxint
		//		Alimenta array com ints
		//			Calcula estatisticas ?
		//	Check se ha repetidos
		//		cleaned_str = ft_strdup("vazio");
	return (0);
}

