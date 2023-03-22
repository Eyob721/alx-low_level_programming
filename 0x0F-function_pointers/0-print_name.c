#include "function_pointers.h"

/**
 * print_name - a function that prints a name, using a callback function
 * @name: a name to be printed
 * @f: a function pointer to a callback function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
