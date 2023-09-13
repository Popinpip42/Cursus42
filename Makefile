NAME = libft.a
FLAGS = -Wall -Werror -Wextra 

all: ${NAME}

objs:
	clang  -c ft_atoi.c -o ft_atoi.o
${NAME}: objs
	ar rc libft.a ft_atoi.o
