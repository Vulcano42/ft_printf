*This project has been created as part of the 42 curriculum by thialima.*

# ft_printf

A custom implementation of the standard C `printf()` function.

---

# Description

`ft_printf` is a reimplementation of the standard C library function `printf()`. Its goal is to reproduce the behavior of the original function while providing a deeper understanding of variadic functions, recursion, formatted output, pointers and low-level I/O using the `write()` system call.

The implementation supports the mandatory conversions:

| Specifier | Description |
|-----------|-------------|
| `%c` | Character |
| `%s` | String |
| `%p` | Pointer |
| `%d` | Signed decimal |
| `%i` | Signed integer |
| `%u` | Unsigned decimal |
| `%x` | Lowercase hexadecimal |
| `%X` | Uppercase hexadecimal |
| `%%` | Percent sign |

Hexadecimal conversions (`%x` and `%X`) are handled by **`ft_brazil_dream()`** *(a custom implementation that replaces the traditional `ft_puthexa()` function commonly used in ft_printf projects).*

---

# Project Structure

```text
.
├── Makefile
├── LICENSE
├── README.md
├── ft_printf.h
├── ft_printf.c
├── ft_conversion.c
├── ft_putchar.c
├── ft_putstr.c
├── ft_putnbr.c
├── ft_put_unsigned_nbr.c
├── ft_putptr.c
└── ft_brazil_dream.c
```

---

# How It Works

`ft_printf()` scans the format string from left to right.

- Ordinary characters are printed immediately using `write()`.
- When `%` is found, the next character is interpreted as a conversion specifier.
- `ft_conversion()` dispatches the request to the appropriate helper function.
- Each helper returns the number of printed characters.
- `ft_printf()` accumulates the total and returns it.

The diagram below summarizes the execution flow.

<p align="center">
  <img src="https://raw.githubusercontent.com/Vulcano42/assets/main/floxograma_ft_printf.png" alt="ft_printf Flowchart" width="900">
</p>

---

# Algorithm and Data Structure

## Algorithm

The implementation uses a **single-pass parsing algorithm**.

The format string is traversed only once.

1. Read one character.
2. Print it if it is not `%`.
3. Otherwise identify the conversion.
4. Call the appropriate helper.
5. Add the returned length.
6. Continue until the end of the string.

This gives the parser a time complexity of **O(n)**.

Integer, unsigned integer and hexadecimal conversions are implemented recursively.

## Data Structure

No complex data structures are required.

The project relies only on:

- `va_list`
- Recursion
- Character pointers
- Stack variables

No dynamic memory allocation is performed.

---

# Function Overview

| Function | Responsibility |
|----------|----------------|
| `ft_printf()` | Parses the format string. |
| `ft_conversion()` | Dispatches conversion specifiers. |
| `ft_putchar()` | Prints one character. |
| `ft_putstr()` | Prints strings. |
| `ft_putnbr()` | Prints signed integers. |
| `ft_put_unsigned_nbr()` | Prints unsigned integers. |
| `ft_putptr()` | Prints pointers. |
| `ft_brazil_dream()` | Prints hexadecimal values (replacement for `ft_puthexa()`). |

---

# Instructions

This project builds a **static library** and therefore **does not include a `main()` function**.

Build:

```bash
make
```

Output:

```text
libftprintf.a
```

Clean object files:

```bash
make clean
```

Remove generated files:

```bash
make fclean
```

Rebuild:

```bash
make re
```

---

# Technical Choices

- One helper function per conversion.
- Recursive number conversion.
- Direct use of `write()`.
- Immediate error propagation.
- Modular design.
- No heap allocation.

---

# Resources

## Documentation

- https://pubs.opengroup.org/onlinepubs/9699919799/functions/printf.html
- https://man7.org/linux/man-pages/man3/printf.3.html
- https://man7.org/linux/man-pages/man2/write.2.html
- https://en.cppreference.com/w/c/io/fprintf

## AI Usage

OpenAI ChatGPT was used as a learning and documentation assistant for:

- understanding variadic functions;
- reviewing recursive algorithms;
- discussing hexadecimal conversion;
- improving documentation;
- reviewing code.

All implementation, debugging and testing were performed manually by the project author.

---

# Author

**42 Login:** thialima

**GitHub:** https://github.com/Vulcano42

---

# License

This repository was developed for educational purposes as part of the 42 curriculum.
