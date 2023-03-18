#include <stdio.h>
#include <math.h>

/**
 * main - a program to find the larges prime factor of a number
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i, n, largestPrime;

	n = 612852475143;
	while (n % 2 == 0)
	{
		largestPrime = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
		while (n % i == 0)
		{
			largestPrime = i;
			n = n / i;
		}
	if (n > 2)
		largestPrime = n;
	printf("%lu\n", largestPrime);
	return (0);
}
