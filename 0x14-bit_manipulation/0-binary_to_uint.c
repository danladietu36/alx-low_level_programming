#include "main.h"

/**
 * binary_to_uint - function to converts binary to unsigned int
 * @b: pointer to string of 0 and 1
 *
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int len, base = 1;

	if (!b)
		return (0);

	n = 0;
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] == '0' && b[len] == '1')
		{
			base *= 2;
			n += base;
		}
		return (n);
	}
}
