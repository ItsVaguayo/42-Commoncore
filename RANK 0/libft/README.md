# Libft - My First Library

**Libft** is the first project in the 42 curriculum. It involves coding a custom C library. This library contains general-purpose functions that will serve as a foundation for your future C projects.


## Technical Considerations

* **Language:** C.
* **Norm:** The project must strictly follow the Norm. Any Norm error results in a 0.
* **Memory Management:** All heap allocated memory must be freed properly. No memory leaks are allowed.
* **Global Variables:** Forbidden.
* **Helper Functions:** `static` functions are allowed to split complex logic so they stay in the appropriate file.
* **Compilation:** All files compile with `-Wall -Wextra -Werror`.
* **Library Creation:** Must use the `ar` command. `libtool` is forbidden.

## Installation & Usage

### Requirements
The project requires a C compiler (`cc`) and standard Make.

### Compiling the Library
To compile the mandatory part of the project, run:

    make

This generates the `libft.a` static library at the root of the repository.

### Makefile Rules
The Makefile includes the following standard rules:

* `make` / `all`: Compiles the library.
* `clean`: Removes object files.
* `fclean`: Removes object files and the `libft.a` binary.
* `re`: Re-compiles everything (clean + all).
* `bonus`: Compiles the library including the bonus list functions.

## Content

### Part 1 - Libc Functions
In this first part, standard libc functions are re-implemented with the same prototypes and behaviors as the originals, but with the `ft_` prefix.

* `ft_isalpha`: Checks for an alphabetic character.
* `ft_isdigit`: Checks for a digit (0 through 9).
* `ft_isalnum`: Checks for an alphanumeric character.
* `ft_isascii`: Checks whether c fits into the ASCII character set.
* `ft_isprint`: Checks for any printable character.
* `ft_strlen`: Calculates the length of a string.
* `ft_memset`: Fills memory with a constant byte.
* `ft_bzero`: Zeroes a byte string.
* `ft_memcpy`: Copies memory area.
* `ft_memmove`: Copies memory area (safe for overlapping regions).
* `ft_strlcpy`: Size-bounded string copying.
* `ft_strlcat`: Size-bounded string concatenation.
* `ft_toupper`: Converts a lower-case letter to upper-case.
* `ft_tolower`: Converts an upper-case letter to lower-case.
* `ft_strchr`: Locates the first occurrence of a character in string.
* `ft_strrchr`: Locates the last occurrence of a character in string.
* `ft_strncmp`: Compares two strings (up to n bytes).
* `ft_memchr`: Scans memory for a character.
* `ft_memcmp`: Compares memory areas.
* `ft_strnstr`: Locates a substring in a string (size-bounded).
* `ft_atoi`: Converts the initial portion of a string to an integer.
* `ft_calloc`: Allocates memory and sets it to zero (malloc).
* `ft_strdup`: Duplicates a string (malloc).

### Part 2 - Additional Functions
A set of functions that are either not in the libc or are part of it but in a different form.

* `ft_substr`: Allocates and returns a substring from the string 's'.
* `ft_strjoin`: Allocates and returns a new string, which is the result of the concatenation of 's1' and 's2'.
* `ft_strtrim`: Allocates and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end.
* `ft_split`: Allocates and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter.
* `ft_itoa`: Allocates and returns a string representing the integer received as an argument.
* `ft_strmapi`: Applies the function 'f' to each character of the string 's' to create a new string.
* `ft_striteri`: Applies the function 'f' to each character of the string 's' (passed by address).
* `ft_putchar_fd`: Outputs the character 'c' to the given file descriptor.
* `ft_putstr_fd`: Outputs the string 's' to the given file descriptor.
* `ft_putendl_fd`: Outputs the string 's' to the given file descriptor, followed by a newline.
* `ft_putnbr_fd`: Outputs the integer 'n' to the given file descriptor.

### Bonus Part - Linked Lists
Functions to manipulate lists using the following structure:

    typedef struct s_list
    {
        void            *content;
        struct s_list   *next;
    } t_list;

To use these functions, your Makefile must have a `bonus` rule.

* `ft_lstnew`: Allocates and returns a new element.
* `ft_lstadd_front`: Adds the element 'new' at the beginning of the list.
* `ft_lstsize`: Counts the number of elements in a list.
* `ft_lstlast`: Returns the last element of the list.
* `ft_lstadd_back`: Adds the element 'new' at the end of the list.
* `ft_lstdelone`: Takes as a parameter an element and frees the memory of the element’s content.
* `ft_lstclear`: Deletes and frees the given element and every successor of that element.
* `ft_lstiter`: Iterates the list 'lst' and applies the function 'f' to the content of each element.
* `ft_lstmap`: Iterates the list 'lst' and applies the function 'f' to the content of each element. Creates a new list resulting from the successive applications of 'f'.

---
This project was completed as part of the 42 curriculum.
