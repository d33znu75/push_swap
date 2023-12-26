# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 16:48:32 by rhmimchi          #+#    #+#              #
#    Updated: 2023/12/26 17:15:32 by rhmimchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./src/ft_atoi.c ./src/ft_split.c ./src/ft_substr.c ./src/ft_strlen.c ./src/checkers.c ./src/parser.c \
		./src/operations_1.c ./src/operations_2.c ./src/operations_push.c ./src/sorting.c \
		./src/operations_stack.c ./src/chunks.c push_swap.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

all: $(NAME)

$(NAME):$(OBJ)
	cc $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all fclean clean re