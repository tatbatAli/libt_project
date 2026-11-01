*This project has been created as part of the 42 curriculum by atatbat.*

# Libft

## Description
Libft is a foundational C programming project that involves creating your very first own library. The goal is to reimplement highly useful standard libc functions to understand how they work under the hood.

The compiled library (libft.a) includes three main components:
- Libc Functions: Re-implementations of standard standard functions (e.g., memset, calloc, strlen, strchr).
- Additional Functions: Custom utility functions for string manipulation and formatting, such as ft_split and ft_itoa.
- Linked List Functions: Tools to easily create, iterate, and manipulate linked lists using a custom t_list structure.

### Detailed Function Breakdown
**1. Libc Functions**
* **Memory Management:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **String Manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
* **Character Classification & Conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* **Conversion:** `ft_atoi`

**2. Additional Functions**
* **String Operations:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
* **Conversion:** `ft_itoa`
* **File Descriptor Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**3. Linked List Functions**
* **Creation & Insertion:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
* **Data Retrieval:** `ft_lstsize`, `ft_lstlast`
* **Deletion & Iteration:** `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions
The library is written in C and compiled using cc.

**Compilation**
Run make at the root of the repository to compile the source files into the required `libft.a` output.
The Makefile contains the following rules:
- `make` or `make all`: Compiles the mandatory part of the library.
- `make clean`: Removes the compiled object files.
- `make fclean`: Removes the object files and the `libft.a` binary.
- `make re`: Cleans and recompiles the library.

**Usage**
To use the library in your programs, include the header in your source code: 
`#include "libft.h"`

## Resources
**Classic References:**
- Linux Manual Pages (man): Used extensively to check the exact prototypes, expected behaviors, and edge cases of the original libc functions.
- Python Tutor: Utilized to visualize C code execution step-by-step and better understand pointer interactions in memory.
- GeeksforGeeks: Consulted for clear explanations on C data structures and algorithmic concepts.
- Wikipedia: Used for cheking the definiton of some concepts, Two's compelemt, glibc, and Valgrind...etc.
- Youtube: Used for seeing Tutorials for Linked list, Kernel table..etc.
- RapidTables: Used for converting from a base number to another one

**AI Usage:** 
AI was used solely as a helper to clarify complex concepts, adhering to the curriculum's rule against taking shortcuts. It was not used to generate code directly or provide direct answers. Specifically, AI was used to clarify and strengthen overall understanding of stack versus heap memory behavior. To ensure genuine learning, the AI was explicitly instructed to act as a Socratic tutor. For example, when asked to fix some Norminette formatting errors, the AI refused to output the code and instead responded:

> "I know it would be much faster if I just handed you the perfectly formatted file. But as your tutor, I cannot give you the final code—part of surviving the 42 curriculum is building the muscle memory to beat Norminette on your own. If I fix it for you today, you will be stuck wrestling with it all over again on your next projects."