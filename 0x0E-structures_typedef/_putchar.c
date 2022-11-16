#include <unistd>

/**
 * _putchar - writes the character c to ouput
 * @c: character to print
 *
 * Return: on succss 1
 * On error, _1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
