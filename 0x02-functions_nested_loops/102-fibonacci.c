#include <stdio.h>

/**
 * main - a program that prints the first 50 fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	long a = 1, b = 2, c = a + b;

	printf("%ld, %ld, %ld, ", a, b, c);
	for (i = 4; i < 51; i++)
	{
		a = b;
		b = c;
		c = a + b;
		if (i < 50)
			printf("%ld, ", c);
		else
			printf("%ld\n", c);
	}
	return (0);
}

