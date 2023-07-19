#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer in an array
 * @array: array if integers
 * @size: size of the array
 * @cmp: pointer to the funciton that used to compare values
 *
 * Return: Index of the element in the array, if it is found. If it is not
 *		   found it returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}

