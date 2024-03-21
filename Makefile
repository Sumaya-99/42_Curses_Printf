# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 15:37:34 by suhelal           #+#    #+#              #
#    Updated: 2024/01/15 12:26:45 by suhelal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES 	   = ft_hex_u.c ft_hex.c ft_pointer.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunbr.c \

CC	= cc

CFLAGS	= -Wall -Wextra -Werror

OFILES	= $(CFILES:.c=.o)

NAME	= libftprintf.a

all: $(NAME)

$(NAME): $(OFILES)
	ar -rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: clean $(NAME)
