# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lolo <lolo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 16:52:36 by lolo              #+#    #+#              #
#    Updated: 2023/07/04 17:58:00 by lolo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

AR = ar -rcs

INCLUDES = ./ft_printf.h

SRC = ft_printf.c\
						ft_printf_aux_bis.c\
						ft_printf_aux.c\
						ft_printf_flags.c
						
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ) $(LIB)
	$(AR) $(NAME) $(OBJ)
	
#%.o:%.c
#	$(CC) -c $(CFLAGS) $^
		
clean:
	rm -rf $(OBJ)
	
fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re