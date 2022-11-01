#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: array of characters
 * @c: the character to locate
 *
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	int a, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return NULL;
}
