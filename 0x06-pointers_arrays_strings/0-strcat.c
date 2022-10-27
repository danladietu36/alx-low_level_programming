#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @src: the string to append
 * @dest: The string destination
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int n;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[a + i] = src[i];
	dest[a + i] = '\0';

	return (dest);
}
