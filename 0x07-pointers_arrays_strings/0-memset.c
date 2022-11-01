#include <stdio.h>


/**
 * _memset - fills memory with a constant byte
 * @s: array of string
 * @b: character constant
 * @n: size of memory area allocated to s
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < 0)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
