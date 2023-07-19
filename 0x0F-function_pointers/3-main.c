#include "3-calc.h"
#include <string.h>

/**
 * main - a calculator program that works on integers
 * @ac: argument count
 * @av: argument vector
 *
 * Return:
 *		- 0 on success
 *		- 98 if the number of arguments is wrong
 *		- 99 if the operator is not +, -, *, /, or %
 *		- 100 if the user tries to divide (/ or %) by zero
 * Description:
 *		- Usgae: calc num1 operator num2
 */
int main(int ac, char **av)
{
	int num1, num2;
	op_t oprn;

	if (ac != 4)
	{
		puts("Error");
		return (98);
	}
	oprn.op = av[2];
	oprn.f = get_op_func(oprn.op);
	if (oprn.f == NULL)
	{
		puts("Error");
		return (99);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	if ((*(oprn.op) == '/' || *(oprn.op) == '%') && num2 == 0)
	{
		puts("Error");
		return (100);
	}
	printf("%d\n", oprn.f(num1, num2));
	return (0);
}
