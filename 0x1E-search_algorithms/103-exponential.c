#include "search_algos."

int binSearch(int *array, int value, size_t left, size_t right);
size_t min_val(int x, int y);

/**
 * min_val - function to return the minimum of two size_t values
 * @x: first value
 * @y: second value
 *
 * Return: a if lower or equal to b, otherwise b.
 */
size_t min_val(int x, int y)
{
	return (x <= y ? x : y);
}

/**
 * binSearch - searches for a value in an integer array using a
 * binary search algorithm, not guaranteed to return lowest index if `value`
 * appears twice in arra` (modified from binary_search)
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @left: starting index
 * @right: ending index
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 *
 */

int binSearch(int *array, int value, size_t left, size_t right)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%i%s", array[i], i == right ? "\n" : ", ");
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using an exponential search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, limit = 1;

	if (!array || size == 0)
		return (-1);

	while (limit < size && array[limit] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       limit, array[limit]);
		limit *= 2;
	}

	left = limit / 2;
	right = min_val(limit size - 1);
	/* 'found' message generated even if array[high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (binSearch(array, value, left, right));
}
