# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 16:26:57 by migferna          #+#    #+#              #
#    Updated: 2019/11/08 11:00:12 by migferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.c ft_atoi.c ft_isspace.c ft_strdup.c ft_strlen.c ft_putchar.c ft_putstr.c ft_strcpy.c ft_strncpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c
#SRCS = $(wildcard *.c)


OBJS = ${SRCS:.c=.o}

CC = CC
RM = rm -rf
AR = ar rcs
RANLIB = ranlib

CFLAGS = -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):
			${CC} $(CFLAGS) -c $(SRCS)
			$(AR) $(NAME) $(OBJS)
			#$(RANLIB) $(NAME)

all:		$(NAME)

clean:
			$(RM) ${OBJS}

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
