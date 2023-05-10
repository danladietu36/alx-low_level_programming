#include "search_algos.h"

/**
 * binary_search - function to to search sorted array of integers for a value
 * @array: pointer to the first element of array to be search
 * @size: number of elements in an array
 * @value: value to search for
 *
 * Return: Always exited sucessful
 */
int binary_search(int *array, size_t size, int value)
{
	int left, mid, right;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%i%s", array[i], i == right ? "\n" : ", ");

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
