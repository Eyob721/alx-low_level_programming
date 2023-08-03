#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *			   to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int no_of_flip_bits = 0, i = 63, bitn, bitm;
	unsigned long int and_mask = 1;

	while (i >= 0)
	{
		bitn = n & and_mask << i ? 1 : 0;
		bitm = m & and_mask << i ? 1 : 0;
		if (bitn != bitm)
			++no_of_flip_bits;
		--i;
	}
	return (no_of_flip_bits);
}
