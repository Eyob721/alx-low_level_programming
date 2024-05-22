#include "search_algos.h"

/**
 * linear_search - a function that searches for a vaulue in an array of
 *                 integers using the Linear search algorithm
 * @array: pointer to an array of integers
 * @size: size of the array
 * @value: value to search for in the array
 *
 * Return: first index where `value` is located, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (array != NULL && i < size)
	{
		printf("Vaue checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		++i;
	}
	return (-1);
}
