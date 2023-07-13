#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of the memory to be allocated
 *
 * Return: pointer to the allocated memory, or NULL, if b == 0
 * Description: if memory allocation fails, the function terminates
 *				the program with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (!mem)
		exit(98);
	return (mem);
}
