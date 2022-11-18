#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function
 * @array: array given
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
