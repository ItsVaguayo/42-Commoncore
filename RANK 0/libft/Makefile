NAME = libft.a

# Compilador
CC = cc

# Eliminación de archivos
RM = rm -f

# Flags de compilación
CFLAGS = -Wall -Werror -Wextra -I.

# Archivos fuente
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
      ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
      ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
      ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
      ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
      ft_putendl_fd.c ft_putnbr_fd.c

# Archivos de bonificación
BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c \
        ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
        ft_lstmap_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c

# Archivos objeto
OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

# Regla por defecto: compilamos la biblioteca
all: $(NAME)

# Crear la biblioteca estática
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Regla para compilar archivos .c a .o
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar los archivos .o
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

# Limpiar y eliminar la biblioteca
fclean: clean
	$(RM) $(NAME)

# Volver a compilar todo desde cero
re: fclean all

# Crear la biblioteca con los archivos de bonificación
bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Definir los objetivos como no archivos
.PHONY: all clean fclean re bonus
