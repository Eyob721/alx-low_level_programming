#include <stdio.h>

/**
 * main - prints lowercase alphabets
 *
 * Return: 0 (no errors)
 */
int main(void)
{
	int c = 97;

	while (c < 123)
		putchar(c++);
	putchar('\n');

	return (0);
}

