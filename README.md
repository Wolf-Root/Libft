*This project has been created as part of the 42 curriculum by yaboualk*

# Libft

## Description

**Libft** is my first project in the 42 curriculum. The goal is to create a custom C library by reimplementing standard C library functions and developing additional utility functions.

This project helps me understand C programming, pointers, memory management, string manipulation, and linked lists. The resulting `libft.a` library can be reused in future 42 projects.

The library is organized into three groups:

- **Libc functions:** Character checks, string operations, memory operations, and conversions.
- **Additional functions:** String creation and manipulation, character mapping, and output to file descriptors.
- **Linked-list functions:** Creating, adding, counting, iterating over, mapping, and deleting linked-list nodes.

## Instructions

### Requirements

- A C compiler, such as `cc` or `gcc`.
- `make`.
- The standard C library and headers.

### Compilation

Clone the repository and enter the project directory. Run:

```sh
make
```

This compiles the source files and creates the static library `libft.a`, assuming the default Makefile target is configured to build it.

To remove object files:

```sh
make clean
```

To remove object files and the library:

```sh
make fclean
```

To rebuild the library from scratch:

```sh
make re
```

### Using the library

Include the header in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```sh
cc main.c -L. -lft -o program
```

Run the program:

```sh
./program
```

## Resources

- [42 Libft subject](https://cdn.intra.42.fr/pdf/pdf/960/libft.en.pdf)
- [DevDocs - C documentation](https://devdocs.io/c)
- [W3Schools - C tutorial](https://www.w3schools.com/c/)
- [Stack Overflow](https://stackoverflow.com/)
- [Libft Unit Test](https://github.com/alelievr/libft-unit-test)

### AI Usage

AI tools were used to quickly search for information, clarify C programming concepts, and find explanations of Libft functions when needed.

## License

This project is licensed under the MIT License, if the repository includes the corresponding license.
