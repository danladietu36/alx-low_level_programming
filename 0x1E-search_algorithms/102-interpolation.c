#include "search_algos.h"

/**
 * interpolation_search - function to search for a value in sorted array
 * of integers using
 * interolation search algorthm
 * @array: pointer to first element of array to search
 * @size: number of elements in the array
 * @value: vaue to search for
 *
 * Return: index containing value, -1 if not found or array is empty
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t pos;

	if (!array)
		return (-1);

	while ((array[right] != array[left]) &&
	       (value >= array[left]) && (value <= array[right]))
	{
		pos = left + (((double)(right - left) / (array[right] -
			array[left])) * (value - array[left]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			left = pos + 1;
		else if (value < array[pos])
			right = pos - 1;
		else
			return (pos);
	}
	if (value == array[left])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (left);
	}
	pos = left + (((double)(right - low) / (array[right] - array[left]))
		* (value - array[left]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
