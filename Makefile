# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 01:44:16 by mhabib-a          #+#    #+#              #
#    Updated: 2022/11/16 02:07:48 by mhabib-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = CC
SRC = ft_printf.c ft_printf_utils.c ft_printf_utils1.CC
OBJ = $(SRC:.c=.o);
LCC = ar rcs
NAME = libftprintf.a
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIB = ft_printf.h

all :$(NAME)

${NAME} :$(OBJ)
	$(LCC) $(NAME) $(OBJ)

clean:
	$(RM) $(NAME)
	
oclean: 
	$(RM) $(OBJ)

fclean: clean oclean

re : fclean all