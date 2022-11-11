#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array of elements
 * @size: size of array
 *
 * Return: NULL on error, pointer to array on success.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
