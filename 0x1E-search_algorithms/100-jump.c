#include "search_algos.h"
#include "math.h" /* compilation requires 'lm' */

size_t min_val(size_t x, size_t y);

/**
 * min_val - function to return the minimu of two values
 * @x: first value
 * @y: second value
 *
 * Return: x if <==y, y if otherwise
 */

size_t min_val(size_t x, size_t y)
{
	return (x <= y ? x : y);
}

/**
 * jump_search - function to search for a value in a sorted array of integers
 * using the well known jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value so search for in the array
 *
 * Return: on success, first index. -1 if value not found or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left, right, step;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);

	for (right = 0; right < size && array[right] < value;
	     left = right, right += step)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       right, array[right]);
	}

	/* print message after every comparison */
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (; left <= min_val(right, size - 1); left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}
	return (-1);
}
