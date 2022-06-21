# C - Pointers, arrays and strings
## Learning Objectives

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

## Scripts and exercices descriptions
### 0-reset_to_98.c
Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.

* Prototype: `void reset_to_98(int *n);`

### 0-strcat.c
Write a function that concatenates two strings.

* Prototype: `char *_strcat(char *dest, char *src);`
* This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
* Returns a pointer to the resulting string `dest`

### 0-memset.c
Write a function that fills memory with a constant byte.

* Prototype: `char *_memset(char *s, char b, unsigned int n);`
* The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
* Returns a pointer to the memory area `s`

### 1-swap.c
Write a function that swaps the values of two integers.
* Prototype: `void swap_int(int *a, int *b);`

### 1-strncat.c
Write a function that concatenates two strings.

* Prototype: `char *_strncat(char *dest, char *src, int n);`
* The `_strncat` function is similar to the `_strcat` function, except that

    * it will use at most `n` bytes from `src`; and
    * `src` does not need to be null-terminated if it contains `n` or more bytes

* Return a pointer to the resulting string `dest`

### 1-memcpy.c
Write a function that copies memory area.

* Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
* The `_memcpy()`  function  copies `n` bytes from memory area `src` to memory area `dest`
* Returns a pointer to `dest`

### 2-strlen.c
Write a function that returns the length of a string.

* Prototype: `int _strlen(char *s);`

### 2-strncpy.c
Write a function that copies a string.

* Prototype: `char *_strncpy(char *dest, char *src, int n);`
* Your function should work exactly like `strncpy`

### 2-strchr.c
Write a function that locates a character in a string.

* Prototype: `char *_strchr(char *s, char c);`
* Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not  found

### 3-puts.c
Write a function that prints a string, followed by a new line, to `stdout`.

* Prototype: `void _puts(char *str);`

### 3-strcmp.c
Write a function that compares two strings.

* Prototype: `int _strcmp(char *s1, char *s2);`
* Your function should work exactly like `strcmp`

### 3-strspn.c
Write a function that gets the length of a prefix substring.

* Prototype: `unsigned int _strspn(char *s, char *accept);`
* Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`

### 4-print_rev.c
Write a function that prints a string, in reverse, followed by a new line.

* Prototype: `void print_rev(char *s);`

### 4-rev_array.c
Write a function that reverses the content of an array of integers.

* Prototype: `void reverse_array(int *a, int n);`
* Where `n` is the number of elements of the array

### 4-strpbrk.c
Write a function that searches a string for any of a set of bytes.

* Prototype: `char *_strpbrk(char *s, char *accept);`
* The `_strpbrk()`  function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
* Returns a pointer to the byte in `s` that matches one of the bytes in `accept`,  or `NULL` if no such byte is found

### 5-string_toupper.c
Write a function that changes all lowercase letters of a string to uppercase.

* Prototype: `char *string_toupper(char *);`

### 5-rev_string.c
Write a function that reverses a string.

* Prototype: `void rev_string(char *s);`

### 5-string_toupper.c
Write a function that changes all lowercase letters of a string to uppercase.

* Prototype: `char *string_toupper(char *);`

### 5-strstr.c
Write a function that locates a substring.

* Prototype: `char *_strstr(char *haystack, char *needle);`
* The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`.  The terminating null bytes (`\0`) are not compared
* Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found

### 6-puts2.c
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

* Prototype: `void puts2(char *str);`

### 6-cap_string.c
Write a function that capitalizes all words of a string.

* Prototype: `char *cap_string(char *);`
* Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`

### 7-puts_half.c
Write a function that prints half of a string, followed by a new line.

* Prototype: `void puts_half(char *str);`
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`

### 7-leet.c
Write a function that encodes a string into [1337](https://intranet.hbtn.io/rltoken/UkxNyYU117IdftA9XxsVyQ "1337").

* Letters `a` and `A` should be replaced by `4`  
* Letters `e` and `E` should be replaced by `3`  
* Letters `o` and `O` should be replaced by `0`  
* Letters `t` and `T` should be replaced by `7`  
* Letters `l` and `L` should be replaced by `1`  
* Prototype: `char *leet(char *);`
* You can only use one `if` in your code
* You can only use two loops in your code
* You are not allowed to use `switch`
* You are not allowed to use any ternary operation

### 7-print_chessboard.c
Write a function that prints the chessboard.

* Prototype: `void print_chessboard(char (*a)[8]);`

### 8-print_array.c
Write a function that prints `n` elements of an array of integers, followed by a new line.

* Prototype: `void print_array(int *a, int n);`
* where `n` is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* You are allowed to use `printf`

### 8-print_diagsums.c
Write a function that prints the sum of the two diagonals of a square matrix of integers.

* Prototype: `void print_diagsums(int *a, int size);`
* Format: see example
* You are allowed to use the standard library

### 9-strcpy.c
* Prototype: `char *_strcpy(char *dest, char *src);`

Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.

* Return value: the pointer to `dest`
