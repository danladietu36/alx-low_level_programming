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
	int i;
	int flag = 0;

	for (i =0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Found element is %d\n" array[i]);
			flag = 1;
			return (arr[i]);
		}
	}
	if (array == NULL || flag == 0)
	{
		return (-1);
	}
}
