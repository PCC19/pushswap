#include "push_swap.h"

int main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	*limpo = NULL;
	(void) limpo;
	double	*array;
	int		n_array;
	int		i;
	t_dlist	*a;
	t_dlist	*b;

	parse_inputs(argc, argv, &array, &n_array);
	//i = -1; while(i++ < n_array - 1) printf("array[%d] = %f\n", i, array[i]);
	check_repeated(array, n_array);

	a = NULL;
	b = NULL;

	a = push_array_into_stack(array, n_array, a);
		printf("is array sorted: %d\n", is_stack_sorted(a));
		q_sort(array, 0, n_array-1);
		b = push_array_into_stack(array, n_array, b);
		printf("is array sorted: %d\n", is_stack_sorted(b));

	i = 0;
	while(i < n_array)
	{
		pb(&a, &b);
		//print_stacks(a,b);
		i++;
	}

// ==================== FREES ===============

	u_free_dlst(a);
	u_free_dlst(b);
	free(array);
	return (0);

// ==================== FIM = ===============


// ==========================================
	u_print_dlst(a);
	u_print_stack(a, 'a');

	printf("first of a: %d\n", *(int*)a->content);
	//printf("a: %p | b %p\n", a, b);
	pb(&a,&b);
	printf("stacks: \n");
	print_stacks(a,b);

	pb(&a,&b);
	print_stacks(a,b);
	pa(&a,&b);
	print_stacks(a,b);
	pb(&a,&b);
	print_stacks(a,b);

	printf("rotate: \n");
	ra(&a, &b);
	print_stacks(a,b);
	ra(&a, &b);
	print_stacks(a,b);
	rb(&a, &b);
	print_stacks(a,b);
	rb(&a, &b);
	print_stacks(a,b);


	printf("reverse rotate: \n");
	rra(&a);
	print_stacks(a,b);
	rra(&a);
	print_stacks(a,b);
	rrb(&b);
	print_stacks(a,b);

	printf("swap: \n");
	sa(&a, &b);
	print_stacks(a,b);
	sa(&a, &b);
	print_stacks(a,b);
	sb(&a, &b);
	print_stacks(a,b);
	sb(&a, &b);
	print_stacks(a,b);
	
	pb(&a,&b);
	ss(&a, &b);
	print_stacks(a,b);
	ss(&a, &b);
	print_stacks(a,b);

	rr(&a, &b);
	print_stacks(a,b);
	rr(&a, &b);
	print_stacks(a,b);

	rrr(&a, &b);
	print_stacks(a,b);
	rrr(&a, &b);
	print_stacks(a,b);


	u_free_dlst(a);
	u_free_dlst(b);
	free(array);
	return (0);


	// Cria lista
	double x = 10;
	printf("ini listas\n");
//	a = ft_dlst_create(&x);
	a = ft_dlst_push(&x, a);
	u_print_dlst(a);
	double y = 20;
	printf("segundo \n");
	a = ft_dlst_push(&y, a);
	u_print_dlst(a);
	printf("terceiro\n");
	double z = 30;
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






}
