# 📚 42 libft - Your Custom C Library

A custom-built standard C library containing essential functions for strings, memory manipulation, and character checks. This project serves as a foundational static library (`libft.a`) for future C projects.

## 🚀 About The Project

In standard C programming, many basic functions are taken for granted. This project involves re-coding these standard standard `libc` functions from scratch, alongside additional utility functions, to understand their inner workings and memory management.

## 🛠️ Functions Implemented

This library includes the following functions, categorized by their utility:

### Character Checks & Manipulation
* `ft_isalpha` - Check if character is alphabetic.
* `ft_isdigit` - Check if character is a digit.
* `ft_isalnum` - Check if character is alphanumeric[cite: 2].
* `ft_isascii` - Check if character fits in the ASCII table[cite: 2].
* `ft_isprint` - Check if character is printable[cite: 2].
* `ft_toupper` - Convert character to uppercase[cite: 2].
* `ft_tolower` - Convert character to lowercase[cite: 2].

### Memory Manipulation
* `ft_memset` - Fill memory with a constant byte[cite: 2].
* `ft_bzero` - Zero a byte string[cite: 2].
* `ft_memcpy` - Copy memory area[cite: 2].
* `ft_memmove` - Copy memory area with overlap protection[cite: 2].
* `ft_memchr` - Scan memory for a character[cite: 2].
* `ft_memcmp` - Compare memory areas[cite: 2].
* `ft_calloc` - Allocate and zero-initialize memory[cite: 2].

### String Manipulation
* `ft_strlen` - Calculate string length[cite: 2].
* `ft_strlcpy` - Size-bounded string copy[cite: 2].
* `ft_strlcat` - Size-bounded string concatenation[cite: 2].
* `ft_strchr` - Locate character in string[cite: 2].
* `ft_strrchr` - Locate character in string from the end[cite: 2].
* `ft_strncmp` - Compare two strings[cite: 2].
* `ft_strnstr` - Locate a substring in a string[cite: 2].
* `ft_strdup` - Duplicate a string[cite: 2].
* `ft_substr` - Extract a substring[cite: 2].
* `ft_strjoin` - Concatenate two strings into a new string[cite: 2].
* `ft_strtrim` - Trim characters from the beginning and end of a string[cite: 2].
* `ft_split` - Split string into an array of substrings[cite: 2].
* `ft_strmapi` - Apply a function to each character of a string to create a new string[cite: 2].
* `ft_striteri` - Apply a function to each character of a string by reference[cite: 2].

### Conversion & File Descriptors
* `ft_atoi` - Convert string to integer[cite: 2].
* `ft_itoa` - Convert integer to string[cite: 2].
* `ft_putchar_fd` - Output a character to a file descriptor[cite: 2].
* `ft_putstr_fd` - Output a string to a file descriptor[cite: 2].
* `ft_putendl_fd` - Output a string with a newline to a file descriptor[cite: 2].
* `ft_putnbr_fd` - Output a number to a file descriptor[cite: 2].

## 💻 Getting Started

### Prerequisites
* GCC compiler
* Make

### Installation & Usage

1. Clone the repository:
   ```bash
   git clone [https://github.com/yourusername/libft.git](https://github.com/yourusername/libft.git)
   cd libft
