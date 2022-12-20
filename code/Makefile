# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 13:22:55 by rchbouki          #+#    #+#              #
#    Updated: 2022/12/12 18:34:58 by rchbouki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
HEADER = -I ./includes
OBJS = ${SRCS:.c=.o}
SRCS = ft_printf.c \
	ft_write_c.c \
	ft_write_s.c \
	ft_write_d.c \
	ft_write_p.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_strlen.c \
	ft_isprint.c \
	ft_strchr.c
NAME = libftprintf.a 

${NAME} : ${OBJS}
	ar -rcs ${NAME} ${OBJS}

all : ${NAME}

.c.o :
	${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all