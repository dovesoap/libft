# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 18:51:28 by kdovidio          #+#    #+#              #
#    Updated: 2018/02/09 13:09:05 by kdovidio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

LIB = -I libft.h

FLAGS = -Wall -Wextra -Werror

FILE = 	ft_isblank.c\
		ft_abs.c\
		ft_isupper.c\
		ft_islower.c\
		ft_min.c\
		ft_isspace.c\
		ft_iscntrl.c\
		ft_isgraph.c\
		ft_isxdigit.c\
		ft_str_is_alpha.c\
		ft_str_is_lowercase.c\
		ft_str_is_numeric.c\
		ft_str_is_printable.c\
		ft_str_is_uppercase.c\
		ft_strupcase.c\
		ft_strlowcase.c\
		ft_strcapitalize.c\
		\
		ft_memset.c\
	   	ft_bzero.c\
	   	ft_memcpy.c\
	   	ft_memccpy.c\
	   	ft_memmove.c\
	   	ft_memchr.c\
	   	ft_memcmp.c\
		ft_strlen.c\
		ft_strdup.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_strcat.c\
		ft_strncat.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strstr.c\
		ft_strnstr.c\
		ft_strcmp.c\
		ft_strncmp.c\
		ft_atoi.c\
	   	ft_isalpha.c\
	   	ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_strsplit.c\
		ft_itoa.c\
	   	ft_putchar.c\
		ft_putstr.c\
	   	ft_putnbr.c\
	   	ft_putendl.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		\
		ft_lstnew.c\
		ft_lstdelone.c\
		ft_lstdel.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lstmap.c

OBJ = $(FILE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
%.o : %.c
	$(CC) $(FLAGS) $(LIB) -o $@ -c $<

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) a.out

re: fclean all

comp: 
	gcc -Wall -Werror -Wextra main_test.c libft.a

.PHONY: all clean fclean re
