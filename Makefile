# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 01:44:16 by mhabib-a          #+#    #+#              #
#    Updated: 2022/11/16 21:57:55 by mhabib-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = CC
SRC = ft_printf.c ft_printf_utils.c ft_printf_utils1.c
OBJ = $(SRC:.c=.o)
LCC = ar rcs
NAME = libftprintf.a
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIB = ft_printf.h

all :$(NAME)

${NAME} :$(OBJ)
	
	$(LCC) $(NAME) $(OBJ)

%.o : %.c $(LIB)
	$(CC) $(CFLAGS) -c $<

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
