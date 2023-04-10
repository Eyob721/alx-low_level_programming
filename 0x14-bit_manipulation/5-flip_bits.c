#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you
 *			would need to flip to get from one number to another
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int and_mask = 1, n_bit, m_bit;
	unsigned int diff_bits = 0;

	while (and_mask != 0)
	{
		n_bit = n & and_mask;
		m_bit = m & and_mask;

		if (n_bit != m_bit)
			diff_bits++;
		and_mask <<= 1;
	}
	return (diff_bits);
}
