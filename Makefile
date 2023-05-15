# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 19:07:28 by agrimald          #+#    #+#              #
#    Updated: 2023/05/12 21:32:25 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre del programa
NAME = libft.a

SRCS = ft_isalnum.c ft_isdigit.c ft_strlcat.c ft_strncmp.c ft_tolower.c \
			ft_isalpha.c ft_isprint.c ft_strlcpy.c ft_strnstr.c ft_toupper.c \
			ft_isascii.c ft_strchr.c ft_strlen.c ft_strrchr.c ft_bzero.c \
			ft_strdup.c ft_memset.c ft_memcpy.c	ft_memchr.c ft_memcmp.c \
			ft_atoi.c ft_calloc.c ft_memmove.c
OBJS = $(SRCS:.c=.o)

#Encabezado
HEADER = libft.h

#Flags de compilacion
CCFLAGS = -Wall -Wextra -Werror

#Reglas de compilacion
%.o: %.c
	cc $(CCFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#Limpieza
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

#Hace un re-make (como si se hubiera ejecutado Make por primera vez)
re: fclean all

#Le dice al make que estos nombre no son archivos
.PHONY: all clean fclean re
