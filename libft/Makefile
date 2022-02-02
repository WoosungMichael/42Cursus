# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 17:45:45 by wookim            #+#    #+#              #
#    Updated: 2022/02/02 17:57:29 by wookim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
FILES = ft_isdigit.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_bzero.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \

OBJ = $(subst .c,.o,$(FILES))

.c.o: $(FILES)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJ)
	ar rcs $@ $^

all: $(NAME)

clean:
	rm -f $(OBJ)
	rm -f *.gch

fclean: clean
	rm -f $(NAME)


re: fclean all
