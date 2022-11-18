#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array to search
 * @size: size of the array
 * @cmp: pointer to function to be used for comparism
 *
 * Return: returns element searched
 * On error, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i] != 0))
				return (i);
	}

	return (-1);
}
