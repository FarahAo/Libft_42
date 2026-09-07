all : $(NAME)

NAME : libft.a

CC : cc

CFLAGS : -Wall -Wextra -Werror 

SRCS : ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c \
	ft_memset.c ft_bzero.c ft_memcpy.c

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
