NAME = push_swap

HEADER_DIR =	includes/

LIBFT_DIR =		libft
LIBFT =			$(LIBFT_DIR)/libft.a


SDIR =	./srcs/
ODIR =	./objs/

SRCS =	$(SDIR)main.c\
		$(SDIR)remove_quotes.c\
		$(SDIR)bye.c\
		$(SDIR)parse_inputs.c\
		$(SDIR)is_integer.c\
		$(SDIR)populate_array.c\
		$(SDIR)q_sort.c\
		$(SDIR)check_repeated.c\
		$(SDIR)u_print_dlst.c\
		$(SDIR)ft_dlst_push.c\
		$(SDIR)u_free_dlst.c\
		$(SDIR)len_dlst.c\
		$(SDIR)last_dlst.c\
		$(SDIR)first_dlst.c\
		$(SDIR)u_print_stack.c\
		$(SDIR)push_array_into_stack.c\
		$(SDIR)push.c\
		$(SDIR)rotate.c\
		$(SDIR)reverse_rotate.c\
		$(SDIR)swap.c\
		$(SDIR)print_stacks.c



OBJS =	$(patsubst $(SDIR)%.c, $(ODIR)%.o, $(SRCS))

CC = clang
HEADERS = -I./$(HEADER_DIR) -I./$(LIBFT_DIR)
C_FLAGS = -Wall -Werror -Wextra -g
C_SANIT = -fsanitize=address
L_FLAGS = -L ./libft -lft


$(NAME):	$(OBJS) $(LIBFT)
	$(CC) $(OBJS) $(C_FLAGS) $(C_SANIT) $(HEADERS) $(L_FLAGS) -o $@
	echo CONCLUIDO

$(ODIR)%.o: $(SDIR)%.c
		mkdir -p $(ODIR)
		$(CC) $(C_FLAGS) $(HEADERS) -c $< -o $@

$(LIBFT):
	make re -C ./libft

all: push_swap

clean:
	make clean -C ./libft
	rm -rf $(ODIR)
	#rm -f $(OBJS)
	#rmdir $(ODIR)

fclean: clean
	make fclean -C ./libft
	rm -f $(NAME)

re: fclean all

run:
	./push_swap

val:	$(OBJS) $(LIBFT)
	$(CC) $(OBJS) $(C_FLAGS) $(HEADERS) $(L_FLAGS) -o $(NAME)
	echo CONCLUIDO
	#./push_swap
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./push_swap
