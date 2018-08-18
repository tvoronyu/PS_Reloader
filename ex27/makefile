# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvoronyu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/20 14:36:07 by tvoronyu          #+#    #+#              #
#    Updated: 2018/03/20 14:36:08 by tvoronyu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_display_file
FILENAMES	=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c ft_putnbr.c

MAIN		=	srcs/ft_display_file.c

LIB			=	libft.a

CC			=	gcc
GLAS		=	-Wall -Wextra -Werror -I includes
AR		=	ar

SOURCES		=	$(addprefix srcs/, $(FILENAMES))
OBJECTS		=	$(addprefix build/, $(FILENAMES:.c=.o))
	
all: $(LIB) $(NAME)

$(NAME): $(MAIN)
	$(CC) $(GLAS) $(MAIN) $(LIB) -o $@

$(LIB): $(OBJECTS)
	$(AR) crs $@ $(OBJECTS)

build/%.o: srcs/%.c | build
	$(CC) $(GLAS) -c $< -o $@

clean:
	@rm -rf build/

lclean: clean
	@rm -rf $(LIB)

fclean: lclean
	@rm -f $(NAME)

re: fclean all

build:
	mkdir build/
