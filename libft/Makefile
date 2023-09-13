NAME = libft.a
SRC = $(shell find . -name "*.c")
OBJ = ${SRC:.c=.o}
FLAGS = -Wall -Werror -Wextra 

all: ${NAME}

objs:
	clang  -c ft_atoi.c -o ft_atoi.o
${NAME}: $(OBJ)
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
