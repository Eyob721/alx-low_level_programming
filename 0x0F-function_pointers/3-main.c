#include "3-calc.h"

/**
 * main - a program that performs simple operations
 * @argc: argument count
 * @argv: argument vector (array of string pointers)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int), a, b;
	char *operator;

	/* Check if the right number of arguments are being used: Error 98*/
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	operator = argv[2];
	b = atoi(argv[3]);

	operation = get_op_func(operator);

	/* If the operation is not +, -, *, / or %: Error 99 */
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	/* Check for division by 0, if the operator is / or %: Error 100*/
	if ((*operator == '/' || *operator == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", operation(a, b));

	return (0);
}
