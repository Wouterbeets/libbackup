#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 14:00:38 by gpetrov           #+#    #+#              #
#    Updated: 2014/01/07 17:09:10 by wbeets           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NO_COLOR=\x1b[0m
OK_COLOR=\x1b[32;01m
ERROR_COLOR=\x1b[31;01m
WARN_COLOR=\x1b[33;01m
NAME	= libft.a
SRCS 	= ft_atoi.c ft_putchar.c ft_strlen.c \
		ft_putnbr.c ft_putstr.c ft_strcpy.c \
		ft_strdup.c ft_memset.c ft_bzero.c \
		ft_strncpy.c ft_strcat.c ft_strncat.c \
		ft_strlcat.c ft_strchr.c ft_memcmp.c \
		ft_memchr.c ft_memmove.c ft_memccpy.c \
		ft_memcpy.c \
		ft_strrchr.c ft_strstr.c ft_strnstr.c \
		ft_strcmp.c ft_strncmp.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_tolower.c ft_toupper.c \
		ft_memalloc.c ft_memdel.c ft_strnew.c \
		ft_strdel.c ft_strclr.c ft_striter.c \
		ft_striteri.c ft_strmap.c ft_strmapi.c \
		ft_strequ.c ft_strnequ.c ft_strsub.c \
		ft_strjoin.c ft_strtrim.c ft_strsplit.c \
		ft_itoa.c ft_putendl.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_lstnew.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c
OBJS	= $(SRCS:.c=.o)
INC		= includes/
FLAGS 	= -Wall -Wextra -Werror -pedantic

all: $(NAME)
	@echo  ""

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o: %.c
	@cc -c $< -o $@ $(FLAGS) -I$(INC)
	@echo  ".\c)"

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all 
