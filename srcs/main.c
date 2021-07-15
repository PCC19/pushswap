#include "push_swap.h"

int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	char *limpo = NULL;

	printf("atoi %d\n", ft_atoi("abc"));


	check_inputs(argc, argv);

	
	printf("string suja : %s\n", argv[1]);
	//printf("string limpa: %s\n", limpo);

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

