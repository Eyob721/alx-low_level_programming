#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguments passed to it
 * @argc: argument count
 * @argv: argument vector(array of string pointers)
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
