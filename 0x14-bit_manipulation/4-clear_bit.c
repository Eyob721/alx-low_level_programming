#include "main.h"

/**
 * clear_bit - a function that clears the value of a bit to 0 at a given index
 * @n: pointer to a long integer
 * @index: index of the bit, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int and_mask = 1;

	if (index > 63)
		return (-1);
	and_mask <<= index;
	*n = *n & ~and_mask;
	return (1);
}
