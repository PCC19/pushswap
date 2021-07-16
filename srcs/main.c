#include "push_swap.h"

int main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	*limpo = NULL;
	double	*array;
	int		n_array;
	int		i;

	parse_inputs(argc, argv, &array, &n_array);
	i = -1; while(i++ < n_array - 1) printf("array[%d] = %f\n", i, array[i]);
	q_sort(array, 0 , argc - 2);

	printf("sorted: \n");
	i = -1; while(i++ < n_array - 1) printf("array[%d] = %f\n", i, array[i]);

	free(array);
	
	printf("Hello World\n");
	free(limpo);
	return (0);
}
/*
Se tem aspas
	Converte aspas em espaco
Input nao tem aspas
	Split por espaco
	Loop ate final do string
		Converte para int
		Checa se eh int e menor que maxint
		Alimenta array com ints
			Calcula estatisticas ?
	Check se ha repetidos
Popula stacks

Implementar comandos

Implementar algoritmo
	Sort basico
	Sort Previo
	Usar medias / quartis
	Outros ?

Instalar checker

Instalar visualizador

*/

