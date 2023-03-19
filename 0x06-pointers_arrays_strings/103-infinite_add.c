#include "main.h"

/**
 * infinite_add - a function to add two numbers in string format
 * @n1: first number in string format
 * @n2: second number in string format
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: r (sum of the two numbers)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, sizeN1 = 0, sizeN2 = 0, large, small, extra = 0, sum;
	char *x, *y;

	for (i = 0; i < size_r; i++)
		r[i] = '\0';
	for (i = 0; n1[i] != '\0'; i++)
		sizeN1++;
	for (j = 0; n2[j] != '\0'; j++)
		sizeN2++;
	large = sizeN1 > sizeN2 ? sizeN1 : sizeN2;
	small = sizeN1 > sizeN2 ? sizeN2 : sizeN1;
	x = sizeN1 > sizeN2 ? n1 : n2;
	y = sizeN1 > sizeN2 ? n2 : n1;
	if (large + 1 >= size_r)
		return (0);
	i = large - 1;
	j = small - 1;
	for (; i >= 0; i--)
	{
		if (j >= 0)
		{
			sum = (x[i] - 48) + (y[j] - 48) + extra;
			j--;
		} else
			sum = (x[i] - 48) + extra;
		if (sum >= 10)
			extra = sum / 10;
		else
			extra = 0;
		r[i + 1] = (sum % 10) + 48;
		if (i - 1 == -1)
			r[i] = extra + 48;
	}
	do {
		if (r[0] == '0')
			for (i = 0; i < size_r + 1; i++)
				r[i] = r[i + 1];
	} while (r[0] == '0');
	return (r);
}
