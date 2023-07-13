# 0x0C. C - More malloc, free

## Mandatory

0-malloc_checked.c

- a function that allocates memory using malloc
- if memory allocation fails, it terminates the program with a status value of 98

1-string_nconcat.c

- a function that concatenates two strings
- the concatenated string contains the first string and the first n bytes of the second string

2-calloc.c

- a function that allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.

3-array_range.c

- a function that creates an array of integers

## Advanced

100-realloc.c

- a function that reallocates a memory block using malloc and free
- newly allocated memory is initialized to prevent memory errors.
- contents of the old memory (ptr) is copied to the new memory.
- if ptr is NULL, and new_size is 0, then the call is equivalent to free(ptr). Return NULL.
- if ptr is NULL, and new_size if not 0, then the call is equivalent to malloc(new_size).

101-mul.c

- a program that multiplies two positive numbers.
- Usage: mul num1 num2
