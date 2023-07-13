#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value of the range
 * @max: maximum value of the range
 *
 * Return:
 *		 - pointer to the newly allocated array
 *		 - NULL, if max > min, or if memory allocation failed
 */
int *array_range(int min, int max)
{
	int *arr, range, i;

	if (max < min)
		return (NULL);
	range = max - min + 1;
	arr = malloc(sizeof(int) * range);
	if (!arr)
		return (NULL);
	arr[0] = min;
	for (i = 1; i < range - 1; i++)
		arr[i] = ++min;
	arr[range - 1] = max;
	return (arr);
}
