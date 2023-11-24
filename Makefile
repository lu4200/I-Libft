# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucas <lucas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 13:29:33 by lumaret           #+#    #+#              #
#    Updated: 2023/11/19 22:59:12 by lucas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
			ft_memcmp.c ft_strlen.c ft_islower.c ft_isupper.c ft_isalpha.c ft_isdigit.c \
			ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_putchar.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c


MAIN	=	main.c

OBJM	=	$(MAIN:.c=.o)

TNAME	= 	test

OBJS 	= 	$(SRCS:.c=.o)

NAME	= 	libft.a

CC		= 	clang
CFLAGS	= 	-Wall -Wextra -Werror

AR		= 	ar rc

RM		= 	rm -f

a %.o: %.c: 
			$(CC) $(CFLAGS) -o $(<:.c=.o) -c $<

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

test:		$(NAME) bonus
			$(CC) $(CFLAGS) -o $(TNAME) $(MAIN) -L. -lft

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(OBJM) $(OBJB)

fclean:		clean
			$(RM) $(NAME) $(TNAME)

re:			fclean all

.PHONY:		all clean fclean re test


