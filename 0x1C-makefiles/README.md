# 0x1C. C - Makefiles

## Mandatory

[0-Makefile](./0-Makefile)

- Requirements:
  - name of the executable: `school`
  - rules: `all`
    - The `all` rule builds the executable
  - variables: none

[1-Makefile](./1-Makefile)

- Requirements:
  - name of the executable: `school`
  - rules: `all`
    - The `all` rule builds the executable
  - variables: `CC`, `SRC`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files

[2-Makefile](./2-Makefile)

- Requirements:
  - name of the executable: `school`
  - rules: `all`
    - The `all` rule builds the executable
  - variables: `CC`, `SRC`, `OBJ`, `NAME`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
  - The `all` rule should recompile only the updated source files
  - Using a list of all the `.o` files is not allowed

[3-Makefile](./3-Makefile)

- Requirements:
  - name of the executable: `school`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - The `all` rule builds the executable
    - `clean`: deletes all Emacs and Vim temporary files along with the
      executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable,
      and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
  - The `all` rule should recompile only the updated source files
  - the `clean`, `oclean`, `fclean`, `re` rules should never fail
  - Using a list of all the `.o` files is not allowed

[4-Makefile](./4-Makefile)

- Requirements:
  - name of the executable: `school`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - The `all` rule builds the executable
    - `clean`: deletes all Emacs and Vim temporary files along with the
      executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable,
      and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
    - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
  - The `all` rule should recompile only the updated source files
  - the `clean`, `oclean`, `fclean`, `re` rules should never fail
  - Using a list of all the `.o` files is not allowed

[5-island_perimeter](./5-island_perimeter.py)

- A python function that returns the perimeter of an island described in a grid.
- Grid is a list of list of integers, with the following properties:
  - In the grid 0 represents a water zone, and 1 represents a land zone
  - One cell is a square with side length 1
  - Grid cells are connected horizontally/vertically (not diagonally).
  - Grid is rectangular, width and height don’t exceed 100
  - Grid is completely surrounded by water, and there is one island (or nothing).
  - The island doesn’t have “lakes” (water inside that isn’t connected to
    the water around the island).

## Advanced

[100-Makefile](./100-Makefile)

- Requirements:
  - name of the executable: `school`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - The `all` rule builds the executable
    - `clean`: deletes all Emacs and Vim temporary files along with the
      executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable,
      and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
    - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
  - The `all` rule should recompile only the updated source files
  - the `clean`, `oclean`, `fclean`, `re` rules should never fail
  - Using a list of all the `.o` files is not allowed
  - Using `$(RM)` for the cleaning up rules is a must, but setting the RM variable
    is not allowed
  - Using the string `$(CC)` more than once in the Makefile is not allowed
  - Using the string `$(RM)` twice in the Makefile is not allowed
  - Using the string `$(CFLAGS)` is not allowed, but the compiler should
    still use the flags set in this variable
  - It is not allowed to have an `$(OBJ)` rule
  - It is not allowed to use the `%.o: %.c` rule
  - The Makefile should work even if there is a file in the folder that has
    the same name as one of your rule
  - The Makefile should not compile if the header file `m.h` is missing
