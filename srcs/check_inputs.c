/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 21:14:14 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/15 22:31:07 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int *populate_array(int argc, char **array_bi)
{
	int		i;
	int		*array;

	array = (int*)malloc(sizeof(int) * (argc - 1));

	i = 0;
	while(i < argc - 1)
	{
		//checks
		array[i] = ft_atoi(array_bi[i]);
		// else
			// free array, bye

		printf("array[i] = %d\n", array[i]);
		i++;
	}
	return (array);

}


int	check_inputs(int argc, char *argv[])
{
	char *limpo = NULL;
	int	*array;
	char **array_bi;
	int	i;

	if (argc == 1)
		bye();
	
	if (argc == 2)
	{
		limpo = remove_quotes(argv[1]);
		array_bi = ft_split(limpo, ' ');
		i = 0;
		while (array_bi[i] != NULL)
			i++;
		array = populate_array(++i, array_bi);
		free(limpo);
		u_free_array_bi(array_bi);
	}

	if (argc > 2)
	{
		limpo = NULL;
		array = populate_array(argc, &argv[1]);
	}


		//Input nao tem aspas
		//	Split por espaco
		//	Loop ate final do string
		//		Converte para int
		//		Checa se eh int e menor que maxint
		//		Alimenta array com ints
		//			Calcula estatisticas ?
		//	Check se ha repetidos
		//		limpo = ft_strdup("vazio");
	free(array);
	return (0);
}

