
COMPILER = cc # clang

COMPILER_FLAGS = -Wall -Wextra -Werror

SOURCE_FILES = arguments.c check_inputs.c ft_atol.c push.c swap.c rotate.c\
reverse_rotate.c clear.c integers.c is_sorted.c pop.c algorithm.c ft_lstsecond_last.c\
sort_three.c common_operations.c is_end.c find_cheapest.c do_operations.c find_closest_end.c\
add_command.c execute.c find_next.c content.c min.c double_free.c get_operations.c find_second.c

BONUS_FILES = is_valid_cmd.c check.c

OBJECT_FILES = $(SOURCE_FILES:.c=.o)
BONUS_OBJECTS = $(BONUS_FILES:.c=.o)

NAME = push_swap

BONUS = checker

LIB_DIR = libft

LIBFT = libft/libft.a

RM = rm -f

HEADER_FILES = push_swap.h libft/libft.h

BONUS_HEADERS = checker.h libft/libft.h

%.o: %.c push_swap.c checker.c
	$(COMPILER) $(COMPILER_FLAGS) -c $< -o $@

$(NAME): $(OBJECT_FILES) $(HEADER_FILES) $(LIBFT)
	$(COMPILER) $(COMPILER_FLAGS) push_swap.c $(OBJECT_FILES) $(LIBFT) -o $(NAME)

$(BONUS): $(BONUS_OBJECTS) $(BONUS_HEADERS) $(OBJECT_FILES) $(LIBFT)
	$(COMPILER) $(COMPILER_FLAGS) checker.c $(BONUS_OBJECTS) $(OBJECT_FILES) $(LIBFT) -o $(BONUS)

$(LIBFT):
	$(MAKE) -C $(LIB_DIR)

bonus: $(BONUS)

all: $(NAME)

clean:
	$(RM) $(OBJECT_FILES) $(BONUS_OBJECTS) 
	$(MAKE) -C $(LIB_DIR) clean

fclean: clean
	$(MAKE) -C $(LIB_DIR) fclean
	$(RM) $(NAME) $(BONUS)

re: fclean all

.PHONY: all clean fclean re