#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to an unsigned long integer
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int or_mask = 1;

	if (index > 63)
		return (-1);
	*n = *n | or_mask << index;
	return (1);
}
