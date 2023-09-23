# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 07:02:19 by lsirpa-g          #+#    #+#              #
#    Updated: 2023/09/22 21:25:52 by lsirpa-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJ = ${SRC:.c=.o}
NAME_BONUS = .bonus
SRC_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
			ft_lstclear_bonus.c ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c ft_lstlast_bonus.c \
			ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJ_BONUS = ${SRC_BONUS:.c=.o}
FLAGS = -Wall -Werror -Wextra
RM = rm -f
CC = cc
AR = ar rc

all: ${NAME}

${NAME}: $(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(FLAGS) -c $^ -o $@
bonus: $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ_BONUS)
clean:
	$(RM) $(OBJ) $(OBJ_BONUS)
fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)
re: fclean all

.PHONY: all, clean, fclean, re, bonus
