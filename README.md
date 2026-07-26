*This project has been created as part of the 42 curriculum by thialima.*

# ft_printf

A custom implementation of the standard C `printf()` function.

---

# Description

`ft_printf` is a reimplementation of the standard C library function `printf()`. The objective of this project is to reproduce the behavior of the original function while gaining a deeper understanding of variadic functions, formatted output, recursion, and low-level I/O through the `write()` system call.

Unlike the original implementation from the C standard library, this project is built entirely from scratch using only the functions allowed by the 42 subject.

The project supports the following conversion specifiers:

| Specifier | Description              |
| --------- | ------------------------ |
| `%c`      | Character                |
| `%s`      | String                   |
| `%p`      | Pointer address          |
| `%d`      | Signed decimal integer   |
| `%i`      | Signed integer           |
| `%u`      | Unsigned decimal integer |
| `%x`      | Lowercase hexadecimal    |
| `%X`      | Uppercase hexadecimal    |
| `%%`      | Percent sign             |

Hexadecimal numbers (`%x` and `%X`) are printed by the function **`ft_brazil_dream()`** *(which replaces the traditional `ft_puthexa()` implementation commonly found in ft_printf projects).*

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

The execution begins in `ft_printf()`, which scans the format string one character at a time.

* Ordinary characters are written directly using `write()`.
* Whenever a `%` character is found, the next character is interpreted as a conversion specifier.
* The specifier is passed to `ft_conversion()`.
* `ft_conversion()` dispatches the request to the appropriate printing function.
* Each printing function returns the number of characters written.
* `ft_printf()` accumulates these values and finally returns the total number of printed characters.

The implementation closely follows the behavior of the standard `printf()` while keeping the code modular and easy to maintain.

---

# Algorithm and Data Structure

## Algorithm

This implementation uses a **single-pass parsing algorithm**.

The format string is traversed only once from left to right.

For each character:

1. If it is not `%`, print it immediately.
2. If it is `%`, read the next character.
3. Identify the conversion type.
4. Call the corresponding helper function.
5. Add the returned length to the total.
6. Continue until the end of the string.

Because each character is processed exactly once, the parser itself runs in **O(n)** time, where **n** is the length of the format string.

Numeric conversions (`ft_putnbr()`, `ft_put_unsigned_nbr()` and `ft_brazil_dream()`) are implemented recursively, producing digits from the most significant to the least significant.

---

## Data Structure

No complex data structures are required for this project.

The implementation relies only on:

* `va_list` for accessing variable arguments.
* Recursive function calls for numeric conversion.
* Character pointers for traversing strings.
* Local stack variables for counters and temporary values.

No dynamic memory allocation is performed, making the implementation lightweight and memory efficient.

---

# Function Overview

| Function                | Purpose                                                                      |
| ----------------------- | ---------------------------------------------------------------------------- |
| `ft_printf()`           | Main entry point. Parses the format string.                                  |
| `ft_conversion()`       | Dispatches conversion specifiers to the correct function.                    |
| `ft_putchar()`          | Prints one character.                                                        |
| `ft_putstr()`           | Prints a string.                                                             |
| `ft_putnbr()`           | Prints signed integers recursively.                                          |
| `ft_put_unsigned_nbr()` | Prints unsigned integers recursively.                                        |
| `ft_putptr()`           | Prints memory addresses (`0x...` or `(nil)`).                                |
| `ft_brazil_dream()`     | Prints hexadecimal numbers (replacement for the traditional `ft_puthexa()`). |

---

# Instructions

This project is a **static library** and therefore **does not contain a `main()` function**.

Compilation is handled entirely by the provided **Makefile**.

## Build

```bash
make
```

This generates:

```text
libftprintf.a
```

## Remove object files

```bash
make clean
```

## Remove all generated files

```bash
make fclean
```

## Rebuild the project

```bash
make re
```

---

# Technical Choices

Some implementation choices include:

* Recursive algorithms for integer and hexadecimal printing.
* Modular architecture with one responsibility per function.
* Direct use of the `write()` system call.
* Immediate error propagation whenever a write operation fails.
* No heap allocation.
* Simple dispatcher (`ft_conversion()`) for conversion routing.

These choices keep the code compact, readable and compliant with the 42 coding standards.

---

# Resources

## Documentation

* The Open Group — `printf()`
  https://pubs.opengroup.org/onlinepubs/9699919799/functions/printf.html

* Linux Manual Pages
  https://man7.org/linux/man-pages/man3/printf.3.html

* Linux Manual Pages — `write()`
  https://man7.org/linux/man-pages/man2/write.2.html

* cppreference
  https://en.cppreference.com/w/c/io/fprintf

---

## AI Usage

Artificial Intelligence (OpenAI ChatGPT) was used exclusively as a learning and review tool during the development of this project.

AI assisted with:

* understanding variadic functions (`va_list`);
* reviewing recursive algorithms;
* discussing hexadecimal conversion;
* explaining pointer manipulation;
* reviewing C syntax;
* identifying edge cases;
* improving documentation.

All source code, debugging, testing, and validation were performed manually by the author.

---

# Author

**42 Login:** thialima

**GitHub:** https://github.com/Vulcano42

---

# License

This repository is intended exclusively for educational purposes as part of the 42 curriculum.

