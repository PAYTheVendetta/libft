# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/07 13:18:47 by aialonso          #+#    #+#              #
#    Updated: 2025/10/09 17:55:32 by aialonso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strchr.c ft_isascii.c ft_isprint.c ft_strrchr.c\
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_tolower.c ft_strlcat.c\
	ft_toupper.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
	ft_substr.c ft_strjoin.c ft_strtrim.c
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