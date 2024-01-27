# 0x18. C - Dynamic libraries

## Mandatory

[libdynamic.so](./libdynamic.so)

- A dynamic library containing all the functions listed below.
- The functions can be found in the [functions](./functions) directory

```C
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

[1-create_dynamic_lib.so](./1-create_dynamic_lib.sh)

- A script that creates a dynamic library called `liball.so` from all the `.c`
  files that are in the current directory.

## Advanced

[100-operations.so](./100-operations.so)

- A dynamic library that contains C functions that be called from Python.
- The C functions are defined in the [calculator.c](./functions/calculator.c) file.

[101-make_me_win.sh](./101-make_me_win.sh)

- In this task we use a script to hack a Giga Millions game, where players pick six
  numbers for  two seprate pool of numbers:
  - five different numbers from 1 to 75 and
  - one number from 1 to 15
- You win the jackpot by matching all six winning numbers in a drawing.
  - The winning numbers are: `9, 8, 10, 24, 75 + 9`
- Usage: `./gm n1 n2 n3 n4 n5 bonus`
- Restrictions:
  - A maximum of two commands is allowed to run on the same server where the
    Giga Millions program runs.
  - On the server containing the Giga Millions game, the program is run like this: `./gm 9 8 10 24 75 9`
  - You can't modify the program `gm` itself.
- My script:
  - downloads my library ([libpapi.so](./giga_millions/libpapi.so)), which
    contains my version of the `rand` function used by the game (`gm`)
    to generate random numbers, and puts it in the `/tmp` directory.
  - then it exports the library path to the `LD_PRELOAD` variable in order for
    my rand function to be loaded first before the standard rand function is loaded.
  - my `rand` function, instead of generating random numbers, sends the winning
    numbers each time it is called.
