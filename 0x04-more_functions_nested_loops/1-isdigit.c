#include "main.h"

/**
 * _isdigit - checks for numbers 0 to 9
 * @c: int to be checked
 * Return: On success 1
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= 'O' && c <= '9')
		y = 1;

	return (y);
}
