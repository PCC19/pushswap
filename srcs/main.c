#include "push_swap.h"

int main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	*limpo = NULL;
	double	*array;
	int		*array_int;
	int		n_array;
	int		i;
	t_dlist	*a;
	t_dlist	*b;

	parse_inputs(argc, argv, &array, &n_array);
	i = -1; while(i++ < n_array - 1) printf("array[%d] = %f\n", i, array[i]);
	check_repeated(array, n_array);

	a = NULL;
	array_int = (int*)malloc(sizeof(int)*n_array);
	printf("n_array: %d\n", n_array);
	i = 0;
	while (i < n_array)
	{
		array_int[i] = (int)array[i];
		printf("array_int[%d] = %d\n", i, array_int[i]);
		i++;

	}
	a = push_array_into_stack(array_int, n_array, a);
	u_print_dlst(a);
	u_print_stack(a, 'a');

	printf("first of a: %d\n", *(int*)a->content);
	b = NULL;
	//printf("a: %p | b %p\n", a, b);
	push(&b,&a);
	//printf("a: %p | b %p\n", a, b);
	printf("-----------\n");	
	u_print_stack(a, 'a');
	u_print_stack(b, 'b');

	push(&b,&a);
	//printf("a: %p | b %p\n", a, b);
	printf("-----------\n");	
	u_print_stack(a, 'a');
	u_print_stack(b, 'b');

	printf("rotate: \n");
	rotate(&a);
	u_print_stack(a, 'a');

	printf("reverse rotate: \n");
	reverse_rotate(&a);
	u_print_stack(a, 'a');
	reverse_rotate(&a);
	u_print_stack(a, 'a');




	u_free_dlst(a);
	u_free_dlst(b);
	free(array);
	free(array_int);
	return (0);


	// Cria lista
	int x = 10;
	printf("ini listas\n");
//	a = ft_dlst_create(&x);
	a = ft_dlst_push(&x, a);
	u_print_dlst(a);
	int y = 20;
	printf("segundo \n");
	a = ft_dlst_push(&y, a);
	u_print_dlst(a);
	printf("terceiro\n");
	int z = 30;
	a = ft_dlst_push(&z, a);
	u_print_dlst(a);
	int len = len_dlst(a);
	printf("len: %d\n", len);
	t_dlist *ult = last_dlst(a);
	printf("ult: %d\n", *(int*)ult->content);
	t_dlist *primeiro = first_dlst(ult);
	printf("first: %d\n", *(int*)primeiro->content);
	printf("stack; \n");
	u_print_stack(a, 'a');








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

