# 0x0B. C - malloc, free

## Mandatory

-   0-create_array.c
    -   a function that creates an array of chars on heap, and initializes it with a specific character. It returns a pointer to the char array.
-   1-strdup.c
    -   a function that returns a pointer to a newly allocated space on heap, which contains a copy of a string given as a parameter. The memory is allocated using malloc, and so it can be freed. Similar to the function strdup.
-   2-str_concat.c
    -   a function that returns a pointer to a newly allocated memory that contains a concatenated string of two strings, given as parameters. The memory is allocated using malloc. It returns NULL if there is failure in allocating memory.
-   3-alloc_grid.c
    -   a function that dynamically allocates a 2d array of integers. It takes two parameters, width and height of the 2d array.
    -   The array is initialized to 0, and it returns NULL on failure. If the width and height arguments passed to the 2d array are 0 or less, it returns NULL.
-   4-free_grid.c
    -   a function that frees a 2d grid that was previously allocated ny the function alloc_grid.

## Advanced

-   100-argstostr.c
    -   a function that return a string that contains all the arguments of a program concatenated together, with a new line added after each argument.
-   101-strtow.c
    -   a function that splits a given string into words. It returns an array of words.
