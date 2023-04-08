#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: long integer
 * @index: index of the bit, starting from 0
 *
 * Return: value of the bit at the index, or -1 if there is error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int and_mask = 1;
	int bit = 0;

	if (index > 63)
		return (-1);
	and_mask <<= index;
	bit = n & and_mask ? 1 : 0;
	return (bit);
}
