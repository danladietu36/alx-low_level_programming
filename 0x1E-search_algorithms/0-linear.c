#include "search_algos.h"

/**
 * linear_search - function to search for value in array of integers
 * @array: pointer to the first element of aarray to search in
 * @size: number of elements in an array
 * @value: value or integer to saech for
 *
 * Return: Always exit success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if ( array == NULL)
	{
		return (-1);
	}

	for (i =0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
