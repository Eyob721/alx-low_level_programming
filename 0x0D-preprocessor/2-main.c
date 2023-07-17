#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: 0 on success, or 1 on error
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
