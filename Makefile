# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 13:29:33 by lumaret           #+#    #+#              #
#    Updated: 2023/11/09 11:01:32 by lumaret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c\
		ft_putchar_fd.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
		ft_tolower.c ft_toupper.c

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

NAME = libft.a

%.o : %.c 
	$(CC) $(CFLAGS) -o $@ -c $<

MAIN : main.c

all :

clean :

fclean :

re:



