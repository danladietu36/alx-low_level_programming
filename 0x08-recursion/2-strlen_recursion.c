#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string length to return
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
