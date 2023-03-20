#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of the given numbers
 * @argc: argument count
 * @argv: argument vector(array of string pointers)
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
		for (j = 0; *(argv[i] + j) != '\0'; j++)
			if (*(argv[i] + j) < 48 || *(argv[i] + j) > 57)
			{
				printf("Error\n");
				return (1);
			}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
