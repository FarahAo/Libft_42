# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/08 11:15:59 by fabo-ome          #+#    #+#              #
#    Updated: 2026/09/09 13:36:39 by fabo-ome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all : $(NAME)

NAME : libft.a

CC : cc

CFLAGS : -Wall -Wextra -Werror 

SRCS : ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c

OBJ: files ending with .o

$(NAME): SRCS 
	$(CC) $(CFLAGS) $^ 

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJ)

fclean : clean 
	rm -rf $(NAME)

re : fclean all 
