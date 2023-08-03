#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: an unsigned long integer
 * @index: index starting from 0
 *
 * Return: value of the bit ath index, or -1 of an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int and_mask = 1;

	if (index > 63)
		return (-1);

	return (n & and_mask << index ? 1 : 0);
}
