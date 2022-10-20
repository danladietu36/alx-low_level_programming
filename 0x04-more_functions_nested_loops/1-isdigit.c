#include "main.h"

/**
 * _isdigit - checks for numbers 0 to 9
 * @c: int to be checked
 * Return: On success 1
 */
int _isdigit(int c)
{
	if (c >= 'O' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
