NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = push_swap.c push_swap_utils.c check_args.c moves.c swap.c push.c rotate.c r_rotate.c sort.c ft_printf.c ft_printf_utils.c libft_utils.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


clean:
			$(RM) $(OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

#so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
#	gcc -nostartfiles -shared -o libft.so $(OBJ)