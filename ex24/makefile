# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvoronyu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/20 14:32:24 by tvoronyu          #+#    #+#              #
#    Updated: 2018/03/20 14:32:27 by tvoronyu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name		=	libft.a
files		=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

gcc			=	gcc
glas		?=	-Wall -Wextra -Werror
glas		+=	-I includes
AR			?=	ar

sources		=	$(addprefix srcs/, $(files))
object		=	$(addprefix build/, $(files:.c=.o))




all: $(name)

clean:
		rm -rf build/

fclean: clean
		rm -f $(name)

re: fclean all

build:
		mkdir build/


$(name): $(object)
	$(AR) crs $@ $(object)
build/%.o: srcs/%.c | build
	$(gcc) $(glas) -c $< -o $@

