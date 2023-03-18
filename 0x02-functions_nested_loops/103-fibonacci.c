#include <stdio.h>

/**
 * main - prints the sum of the even numbers in the fibonacci sequence
 * which are under 4,000,000.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long a = 0, b = 1, c = a + b, sum = 0;

	while (c <= 4000000)
	{
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%lu\n", sum);
	return (0);
}

