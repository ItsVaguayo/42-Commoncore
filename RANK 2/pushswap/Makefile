NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -ggdb3

SRC =	pushswap.c \
		ft_atol.c \
		ft_split.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_substr.c \
		list_utilities.c \
		normalice.c \
		radix_sort.c \
		sort_five.c \
		sort_two_three.c \
		validate.c \
		movements/push.c \
		movements/reverse_rotate.c \
		movements/rotate.c \
		movements/swap.c

OBJ = $(SRC:.c=.o)

HEADER = pushswap.h

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
