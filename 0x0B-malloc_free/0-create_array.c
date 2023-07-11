#include "main.h"

/**
 * create_array - a function that creates an array of chars
 *				  and initializes it with a specific char
 * @size: size of the character array
 * @c: a character
 *
 * Return: pointer to the dynamically allocated character array, or
 *		   NULL if malloc fails, or if size is zero or less
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *chr_arr;

	if (size <= 0)
		return (NULL);
	chr_arr = malloc(sizeof(char) * size);
	if (chr_arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		chr_arr[i] = c;
	return (chr_arr);
}
