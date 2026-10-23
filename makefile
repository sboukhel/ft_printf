# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sboukhel <sboukhel@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/23 00:00:00 by sboukhel          #+#    #+#              #
#    Updated: 2026/10/23 16:16:46 by sboukhel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./printf
AR = ar rcs
NAME = libftprintf.a

SRCS = \
		printf/ft_putchar.c \
		printf/ft_putstr.c \
		printf/ft_strlen.c \
		printf/ft_putnbr.c \
		printf/addr_hex.c \
		printf/hexa.c \
		printf/printf.c

OBJS = $(SRCS:.c=.o)
HEADER = printf/printf.h

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

test: all
	$(CC) $(CFLAGS) test/main.c -L. -lftprintf -o printf_test

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) printf_test

re: fclean all

.PHONY: all clean fclean re test
