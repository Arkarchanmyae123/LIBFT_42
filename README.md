# 📚 42 libft - Your Custom C Library

A custom-built standard C library containing essential functions for strings, memory manipulation, and character checks. This project serves as a foundational static library (`libft.a`) for future C projects.

## 🚀 About The Project

In standard C programming, many basic functions are taken for granted. This project involves re-coding these standard standard `libc` functions from scratch, alongside additional utility functions, to understand their inner workings and memory management.

## 🛠️ Functions Implemented

This library includes the following functions, categorized by their utility:

### Character Checks & Manipulation
* `ft_isalpha` - Check if character is alphabetic.
* `ft_isdigit` - Check if character is a digit.
* `ft_isalnum` - Check if character is alphanumeric.
* `ft_isascii` - Check if character fits in the ASCII table.
* `ft_isprint` - Check if character is printable.
* `ft_toupper` - Convert character to uppercase.
* `ft_tolower` - Convert character to lowercase.

### Memory Manipulation
* `ft_memset` - Fill memory with a constant byte.
* `ft_bzero` - Zero a byte string.
* `ft_memcpy` - Copy memory area.
* `ft_memmove` - Copy memory area with overlap protection.
* `ft_memchr` - Scan memory for a character.
* `ft_memcmp` - Compare memory areas.
* `ft_calloc` - Allocate and zero-initialize memory.

### String Manipulation
* `ft_strlen` - Calculate string length.
* `ft_strlcpy` - Size-bounded string copy.
* `ft_strlcat` - Size-bounded string concatenation.
* `ft_strchr` - Locate character in string.
* `ft_strrchr` - Locate character in string from the end.
* `ft_strncmp` - Compare two strings.
* `ft_strnstr` - Locate a substring in a string.
* `ft_strdup` - Duplicate a string.
* `ft_substr` - Extract a substring.
* `ft_strjoin` - Concatenate two strings into a new string.
* `ft_strtrim` - Trim characters from the beginning and end of a string.
* `ft_split` - Split string into an array of substrings.
* `ft_strmapi` - Apply a function to each character of a string to create a new string.
* `ft_striteri` - Apply a function to each character of a string by reference.

### Conversion & File Descriptors
* `ft_atoi` - Convert string to integer.
* `ft_itoa` - Convert integer to string.
* `ft_putchar_fd` - Output a character to a file descriptor.
* `ft_putstr_fd` - Output a string to a file descriptor.
* `ft_putendl_fd` - Output a string with a newline to a file descriptor.
* `ft_putnbr_fd` - Output a number to a file descriptor.

## 💻 Getting Started

### Prerequisites
* GCC compiler
* Make
