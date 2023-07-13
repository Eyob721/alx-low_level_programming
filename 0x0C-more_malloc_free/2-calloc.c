#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of member of the array
 * @size: size of a single member
 *
 * Return:
 *		- A pointer to the allocated memory, if the memory allocation succeeds.
 *		- NULL, if either nmemb or size is 0, or if the memory allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (!mem)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;
	return ((void *)mem);
}
