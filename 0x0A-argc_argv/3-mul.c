#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: argument count
 * @argv: argument vector(array of string pointers)
 *
 * Return: 0 (Success), 1 (otherwise)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
