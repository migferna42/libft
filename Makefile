# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 16:26:57 by migferna          #+#    #+#              #
#    Updated: 2019/11/19 10:43:41 by migferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC_DIR = includes
SRC_DIR = srcs
SRC_BONUS_DIR = bonus
OBJ_DIR = objs

INCLS	= $(INC_DIR)
SRCS	= $(wildcard $(SRC_DIR)/*.c)
SRCS_BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJS	= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJS_BONUS = $(SRCS_BONUS:%.c=$(OBJ_DIR)/%.o)

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

bonus:		obj
			$(MAKE) $(OBJS_BONUS)
			$(AR) $(NAME) $(OBJS_BONUS)
			$(RANLIB) $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)/$(INCLS)

$(OBJ_BONUS_DIR)/%.o: $(SRC_BONUS_DIR)/%.c
		$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)/$(INCLS)

clean:
			$(RM) ${OBJS} $(OBJ_DIR)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
