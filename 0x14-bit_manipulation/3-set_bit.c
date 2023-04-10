#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: pointer to a long integer
 * @index: index of the bit, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int or_mask = 1;

	if (index > 63)
		return (-1);
	or_mask <<= index;
	*n = *n | or_mask;
	if (*n)
		return (1);

	return (-1);
}
