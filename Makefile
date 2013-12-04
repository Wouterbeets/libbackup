# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wbeets <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/09/25 22:18:52 by wbeets            #+#    #+#              #
#    Updated: 2013/12/04 12:06:57 by wbeets           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean fclean re src

SRC = 	ft_memmove.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_memset.c \
		ft_strcmp.c \
		ft_strstr.c \
		ft_isalnum.c \
		ft_strcpy.c \
		ft_tolower.c \
		ft_isalpha.c \
		ft_toupper.c \
		ft_isascii.c \
		ft_strdup.c \
		ft_isdigit.c \
		ft_strlcat.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memccpy.c \
		ft_strncat.c \
		ft_memchr.c \
		ft_strncmp.c \
		ft_memcmp.c \
		ft_strncpy.c \
		ft_memcpy.c \
		ft_strcat.c \
		ft_strnstr.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c\
		ft_isupper.c\
		ft_islower.c\
		ft_atoi.c

OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME) 

$(NAME): obj
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

obj:
	gcc -c $(SRC) -Wall -Werror -Wextra

clean:
	rm -f $(OBJ)

fclean: clean
	-rm $(NAME)

re: fclean all
