#include "push_swap.h"

int main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	*limpo = NULL;
	double	*array;
	int		n_array;
	int		i;
	t_dlist	*a;

	parse_inputs(argc, argv, &array, &n_array);
	i = -1; while(i++ < n_array - 1) printf("array[%d] = %f\n", i, array[i]);
	check_repeated(array, n_array);

	// Cria lista
	a = NULL;
	int x = 10;
	printf("ini listas\n");
//	a = ft_dlst_create(&x);
	a = ft_dlst_push(&x, a);
	u_print_dlst(a);
	int y = 20;
	printf("segundo \n");
	a = ft_dlst_push(&y, a);
	u_print_dlst(a);
	u_free_dlst(a);


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

