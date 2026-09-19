*This activity has been created as part of the 42 curriculum by fabo-ome.*

# Libft


## Description

Libft is a project from the 42 curriculum focused on creating a personal C library from scratch.

The goal of this project is to recreate a set of functions from the standard C library, as well as implement additional utility functions. The project also introduces linked lists and requires creating functions to manipulate them.

Through this project, I practiced working with strings, memory allocation, pointers, arrays, linked lists, and file descriptors. I also learned how to organize and compile multiple C source files into a static library using a Makefile.

## Instructions

The library is compiled using the provided Makefile.

To compile the library:

```bash
make
```

This creates the `libft.a` static library at the root of the repository.

To remove the object files:

```bash
make clean
```

To remove the object files and the library:

```bash
make fclean
```

To recompile the library from scratch:

```bash
make re
```

To use the library in a C program, include the header file:

```c
#include "libft.h"
```

The program can then be compiled together with the library:

```bash
cc -Wall -Wextra -Werror  main.c libft.a
```
## Functions

### Mandatory Part

The mandatory part consists of reimplementing commonly used C library functions and creating additional utility functions.

**Character functions:**
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

**String functions:**
`ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup`, `ft_atoi`

**Memory functions:**
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

**Additional functions:**
`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`

**File descriptor functions:**
`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus Part

The bonus part focuses on linked lists and provides functions for creating, accessing, modifying, and manipulating linked-list nodes.

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`
## Resources

### Documentation and References

* The 42 Libft project subject.
* Linux `man` pages and C standard library documentation.
* GeeksforGeeks articles.
* YouTube videos related to C programming and Libft.
* Help and explanations from peers during the project.

### AI Usage

AI was used as a learning tool to explain C programming concepts and clarify topics such as pointers, memory management, linked lists, file descriptors, Makefiles, and function behavior.

The code was written as part of my own work, with these resources used to support my learning and understanding throughout the project.
## Author

fabo-ome
