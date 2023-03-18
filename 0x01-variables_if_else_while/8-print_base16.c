#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (no errors)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (i = 97; i < 103; i++)
		putchar(i);

	putchar('\n');

	return (0);
}

