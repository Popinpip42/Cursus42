NAME = libft.a
SRC = $(shell find . -name "*.c" ! -name "*_bonus.c")
OBJ = ${SRC:.c=.o}
SRC_BONUS = $(shell find . -name "*_bonus.c")
OBJ_BONUS = ${SRC_BONUS:.c=.o}
FLAGS = -Wall -Werror -Wextra
RM = rm -f

all: ${NAME}

${NAME}: $(OBJ)
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)

bonus: $(OBJ_BONUS)
	gcc $(FLAGS) -c $(SRC_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)
