# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 12:32:35 by denysdudka        #+#    #+#              #
#    Updated: 2024/10/16 14:07:57 by denysdudka       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c  ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunnbr.c ft_puthex_up.c ft_puthex.c ft_put_p.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= gcc
RM		= rm -f

CFLAGS 	= -Wall -Wextra -Werror

all:		${NAME}

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $?

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:  
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all