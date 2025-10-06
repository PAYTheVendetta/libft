# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/07 13:18:47 by aialonso          #+#    #+#              #
#    Updated: 2025/10/06 17:36:49 by aialonso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strchr.c ft_isascii.c ft_isprint.c ft_strrchr.c\
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_tolower.c ft_strlcat.c

FLAGS = -Wall -Wextra -Werror

OBJECTS= $(SOURCES:.c=.o)

all: $(NAME)

$(NAME):$(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	
cleanb:
	rm -f $(OBJECTS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all cleanb

comp: re
	$(CC) main.c $(NAME)  -o librari
	./librari