
---

# libft

`libft` is a custom implementation of standard C library functions, designed to provide a foundation of essential utility functions for C programming. It includes a wide range of functions for memory management, string manipulation, and more, which can be used in other projects, particularly when working with low-level system programming and embedded systems.

This project was developed as part of the [42 Network](https://www.intra.42.fr/) curriculum.

---

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)

---

## Description

`libft` is a library containing implementations of many standard C library functions that are commonly used in C programming. These functions are written from scratch to demonstrate a deep understanding of C programming fundamentals, including memory management, string handling, and error handling.

The project includes utility functions for string manipulation (e.g., `ft_strlen`, `ft_strcpy`), memory management (e.g., `ft_memset`, `ft_memcpy`), as well as other standard utilities like `ft_isdigit`, `ft_tolower`, and more. 

---

## Features

The `libft` library includes the following categories of functions:

### String Manipulation
- `ft_strlen` – Calculate the length of a string.
- `ft_strcpy` – Copy a string to another.
- `ft_strdup` – Duplicate a string.
- `ft_strchr` – Find the first occurrence of a character in a string.
- `ft_strncmp` – Compare two strings with a specific number of characters.

### Memory Management
- `ft_memset` – Fill a block of memory with a specified value.
- `ft_memcpy` – Copy a block of memory from one location to another.
- `ft_memmove` – Move a block of memory, ensuring safety in case of overlap.
- `ft_memalloc` – Allocate memory and initialize it to zero.
- `ft_memdel` – Deallocate a block of memory.

### Type Checking
- `ft_isdigit` – Check if a character is a digit.
- `ft_isalpha` – Check if a character is alphabetic.
- `ft_isalnum` – Check if a character is alphanumeric.
- `ft_isascii` – Check if a character is ASCII.
- `ft_isprint` – Check if a character is printable.

### Integer Operations
- `ft_atoi` – Convert a string to an integer.
- `ft_itoa` – Convert an integer to a string.

### Character Operations
- `ft_toupper` – Convert a character to uppercase.
- `ft_tolower` – Convert a character to lowercase.

### Linked Lists
- `ft_lstnew` – Create a new linked list element.
- `ft_lstadd` – Add a new element to the front of a linked list.
- `ft_lstdel` – Delete an element from the linked list.

### Others
- `ft_putchar` – Output a single character to the standard output.
- `ft_putstr` – Output a string to the standard output.
- `ft_putnbr` – Output an integer to the standard output.

---

## Installation

To use `libft`, clone the repository to your local machine:

```bash
git clone https://github.com/mouadnajjar/libft.lastpush.git
cd libft
```

Once you have the repository, you can compile it into a static library that can be linked with other projects:

```bash
make
```

This will generate a `libft.a` static library file, which you can link in your C projects.

---

## Usage

To use `libft` functions in your project, include the `libft.h` header and link the compiled `libft.a` static library during compilation.

For example, in a program:

```c
#include "libft.h"

int main() {
    char *str = "Hello, world!";
    int len = ft_strlen(str);
    ft_putnbr(len);
    return 0;
}
```

To compile your program with the `libft` library:

```bash
gcc -o my_program my_program.c -L. -lft
```

Make sure to use the `-L` option to specify the directory where `libft.a` is located, and the `-lft` option to link the library.

---

## Examples

Here are some examples of how to use `libft` functions:

```c
// Example: ft_strlen
char *str = "Hello, 42!";
int len = ft_strlen(str);
printf("Length of string: %d\n", len);  // Output: Length of string: 11

// Example: ft_memcpy
char src[] = "Hello, world!";
char dest[20];
ft_memcpy(dest, src, 13);
printf("Destination: %s\n", dest);  // Output: Destination: Hello, world!

// Example: ft_isdigit
char c = '5';
if (ft_isdigit(c))
    printf("'%c' is a digit.\n", c);  // Output: '5' is a digit.
else
    printf("'%c' is not a digit.\n", c);
```

---

## Contributing

Contributions to this project are welcome! If you'd like to contribute, please fork the repository, make your changes, and create a pull request. Ensure that your code follows the project's coding style and passes any provided tests.

For any suggestions or improvements, feel free to open an issue in the GitHub repository.

---
