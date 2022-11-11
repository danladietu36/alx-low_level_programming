#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer value
 *
 * Return: 0 on success, 98 when failed.
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(sizeof(char) * b);

	if (str == NULL)
		exit(98);
	else
		return (str);
}
