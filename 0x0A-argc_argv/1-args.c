#include <stdio.h>
#include "main.h"

/**
 * main - prints number of argument passed into it
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) *argv; /*ignore variable*/

	printf("%d\n", argc - 1);
	return (0);
}
