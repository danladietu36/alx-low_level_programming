#include "main.h"

/**
 * factorial -factorial of a given number
 * @n: value of integer
 *
 * Return: 0 on success
 * On error, -1/
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
