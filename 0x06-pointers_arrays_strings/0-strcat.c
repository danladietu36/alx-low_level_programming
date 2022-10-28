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
	int n;
	int i;

	 n = 0;
	while (dest[n] != '\0';)
	{
		n++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
}
