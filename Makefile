all : $(NAME)

NAME : libft.a

CC : cc

CFLAGS : -Wall -Wextra -Werror 

SRCS : files ending with .c

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
