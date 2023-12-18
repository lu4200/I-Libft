# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 13:29:33 by lumaret           #+#    #+#              #
#    Updated: 2023/12/18 16:34:15 by lumaret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
			ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
			ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_striteri.c 

BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJB	=	$(BONUS:.c=.o)

OBJM	=	$(MAIN:.c=.o)

OBJS 	= 	$(SRCS:.c=.o)

NAME	= 	libft.a

CC = cc

CFLAGS	= 	-Wall -Wextra -Werror

AR		= 	ar rc

RM		= 	rm -f

.c.o:
	$(CC) $(CFLAGS) -o $(<:.c=.o) -c $<

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

all:		$(NAME)

bonus:		$(OBJB)
	$(AR) $(NAME) $(OBJB)
	
clean:
	$(RM) $(OBJS) $(OBJM) $(OBJB)

fclean:		clean
	$(RM) $(NAME) $(TNAME)

re:	fclean all

.PHONY: all clean fclean re bonus

