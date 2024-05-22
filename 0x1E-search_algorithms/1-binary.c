#include "search_algos.h"

/**
 * print_array - prints part of the array that a search is conducted in
 * @array: pointer to an array of integers
 * @start: index in the array where the search starts
 * @end: index in the array where the search ends
 *
 * Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start <= end)
	{
		printf("%d", array[start++]);
		if (start <= end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - a function that searches for a vaulue in an array of
 *                 integers using the Binary search algorithm
 * @array: pointer to an array of integers
 * @size: size of the array
 * @value: value to search for in the array
 *
 * Return: first index where `value` is located, otherwise -1
 * Description:
 *     - It is assumed that `value` won't appear more than once
 *     - It is assumed the array is sorted in ascending order
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	while (array != NULL && low <= high)
	{
		mid = (low + high) / 2;

		print_array(array, low, high);
		if (array[mid] == value)
			return (mid);

		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
