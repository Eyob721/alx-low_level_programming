#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program executable
 * @argc: argument count
 * @argv: argument vector(array of string pointers)
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
