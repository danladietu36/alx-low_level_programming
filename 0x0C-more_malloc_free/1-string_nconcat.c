#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n:number of bytes of s2 to copy
 *
 * Return: Null if fails, return pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < j; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
