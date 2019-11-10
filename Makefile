# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 16:26:57 by migferna          #+#    #+#              #
#    Updated: 2019/11/10 09:15:24 by migferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC_DIR = includes
SRC_DIR = srcs
OBJ_DIR = objs

INCLS	= $(INC_DIR)
SRCS	= $(wildcard $(SRC_DIR)/*.c)
OBJS	= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC = cc
RM = rm -rf
AR = ar rcs
RANLIB = ranlib

CFLAGS += -Wall -Werror -Wextra -g
LFLAGS += -I.

all:		obj
			$(MAKE) $(NAME)

obj:		
			mkdir -p $(OBJ_DIR)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			$(RANLIB) $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)/$(INCLS)

clean:
			$(RM) ${OBJS} $(OBJ_DIR)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
