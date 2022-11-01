#include "main.h"


/**
 * _memset - fills memory with a constant byte
 * @s: array of string
 * @b: character constant
 * @n: size of memory area allocated to s
 * Return: The memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
