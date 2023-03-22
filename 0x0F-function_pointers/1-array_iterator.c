#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * on every element of an array
 * @array: a given array
 * @size: size of the array
 * @action: a callback function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
