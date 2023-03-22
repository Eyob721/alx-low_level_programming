# 0x0F. C - Function pointers

## Mandatory

- 0-print_name.c
  - this is a function that prints a name using a callback function.

- 1-array_iterator
  - a function that executes a function given as a parameter on every element of an array

- 2-int_index.c
  - a function that searches for an integer in array, using a callback function to compare the elements a search key. It returns the index of the element if successful, or -1 if it failed.

- 3-calc.h, 3-op_functions.c, 3-get_op_func.c, 3-main.c
  - here is a program that performs simple operations
  - usage: calc num1 operator num2
  - calc is the name of the executable (you can use another name). num1, operator, and num2 are arguments passed to the program
  - operator is one of +, -, *, /, or %
  - if the number of arguments is wrong, it will print "Error" and exit with the status 98
  - if the operator is none of the above, it will print "Error" and exit with the status 99
  - if the user tries to divide (/ or %) by 0, it will print Error and exit with the status 100
  - otherwise the program prints the result of the operation, followed by a new line
  - the program uses these four files
    - 3-main.c: file containing the main function
    - 3-get_op_function.c: file containing the function to pick the right operation function for the operator passed by the user
    - 3-op_functions.c: file that contains the definitions of the operation functions
    - 3-calc.h: header file that contains the prototypes of the operations functions and a data structure to hold operator and its operation function pointer
