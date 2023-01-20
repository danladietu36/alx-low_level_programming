#include "main.h"

/*
 * add - add two integers
 * @a: first integers
 * @b: second integers
 * return: addition of both integers
 *
 */
int add(int a, int b)
{
	int sum;
	sum = a + b;
	return (sum);
}

/*
 * sub - subtraction function
 * @a: first integers
 * @b: second integers
 * return: The result of both integers
 *
 */
int sub(int a, int b)
{
	int res;
	res = a - b;

	return (res);
}

/*
 * mul - multiply two integers
 * @a: first integers
 * @b: second integers
 * return: Result of the multiplication
 */
int mul(int a, int b)
{
	int res;
	res = a * b;
	return (res);
}

/*
 * div - division function
 * @a: first integer
 * @b: second integer
 * return: the result of the divsion
 */

int div(int a, int b)
{
	int res;
	res = a / b;

	return (res);
}

/*
 * mod - modulus function
 * @a: first integer
 * @b: second integer
 * return: The remainder
 */

int mod(int a, int b)
{
	int res;
	res = a % b;

	return (res);
}
