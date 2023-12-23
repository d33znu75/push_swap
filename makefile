# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 16:48:32 by rhmimchi          #+#    #+#              #
#    Updated: 2023/12/23 21:18:29 by rhmimchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_split.c ft_substr.c ft_strlen.c checkers.c parser.c \
		operations_1.c operations_2.c operations_push.c sorting.c \
		operations_stack.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap.a

all: $(NAME)

$(NAME):$(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o:%.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all fclean clean re