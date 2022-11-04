#include "main.h"
/**
 * _pow_recursion - function to return the value of number
 * @x: value to return
 * @y: exponential
 *
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else
		return (result + x(y-1);
}
