#include "main.h"

/**
 * create_array - a function that creates an array of char, using malloc
 * and initializes it with a given character
 * @size: size of the char array
 * @c: initializing character
 *
 * Return: pointer the char array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size <= 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	/* If malloc is successful, fill the array with the given character */
	if (arr)
		for (i = 0; i < size; i++)
			*(arr + i) = c;

	return (arr);
}
