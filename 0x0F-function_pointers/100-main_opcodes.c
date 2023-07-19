#include "function_pointers.h"
#include <stdio.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, or 1 on error
 * Description:
 *		Okay this is how it works, to get the opcode of the main function we
 *		dereference the main function. How? Okay so a function name is not a
 *		function pointer, but it can decay into one in certain contexts. When
 *		you refer to the name of a function without parenthesis, such as when
 *		you assign a function to a function pointer, it decays to a function
 *		pointer that points to the entry point of the function instruction in
 *		the code section of the main memory. And these are the opcodes. So we
 *		can read this opcodes by typcasting them to a string.
 */
int main(int ac, char **av)
{
	int i, no_of_bytes;

	if (ac != 2)
	{
		puts("Error");
		return (1);
	}
	no_of_bytes = atoi(av[1]);
	if (no_of_bytes < 0)
	{
		puts("Error");
		return (2);
	}
	for (i = 0; i < no_of_bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < no_of_bytes - 1)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
