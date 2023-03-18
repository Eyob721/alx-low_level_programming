#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int i, a, b, c, a1, a2, b1, b2, c1, c2;

	a = 1;
	b = 2;
	c = a + b;
	printf("%lu, %lu, %lu, ", a, b, c);
	for (i = 3; i < 92; i++)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%lu, ", c);
	}
	b1 = b / 1000000000;
	b2 = b % 1000000000;
	c1 = c / 1000000000;
	c2 = c % 1000000000;
	for (i = 93; i <= 98; i++)
	{
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
		c1 = (a1 + b1) + ((a2 + b2) / 1000000000);
		c2 = (a2 + b2) % 1000000000;
		if (i < 98)
			printf("%lu%lu, ", c1, c2);
		else
			printf("%lu%lu\n", c1, c2);
	}
	return (0);
}

