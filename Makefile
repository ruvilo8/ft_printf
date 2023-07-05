# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lolo <lolo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 16:52:36 by lolo              #+#    #+#              #
#    Updated: 2023/07/05 20:55:02 by lolo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

AR = ar
AR_FLAGS = crs

CC = gcc
CFLAGS = -Wall -Werror -Wextra

RM = rm
RM_FLAGS = -f

INCLUDES = ./ft_printf.h

SRC = ft_printf.c\
						printflags.c\
						ft_printf_aux_bis.c\
						ft_printf_aux.c\

						
OBJ = $(SRC:.c=.o)

all: $(NAME)

clean:
		${RM} ${RM_FLAGS} ${OBJ}

fclean: clean
		${RM} ${RM_FLAGS} ${NAME}

re: fclean all

$(OBJ): %.o : %.c $(INCLUDES)
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
		${AR} ${AR_FLAGS} $(NAME) $(OBJ)

.PHONY: all clean fclean re