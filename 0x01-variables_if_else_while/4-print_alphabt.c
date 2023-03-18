#include <stdio.h>

/**
 * main - prints lowercase alphabets except q and e
 *
 * Return: 0 (no errors)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		if (i != 113 && i != 101)
			putchar(i);
	putchar('\n');

	return (0);
}

