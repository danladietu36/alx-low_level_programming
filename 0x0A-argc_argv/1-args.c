#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of argument passed into it
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc);
	return (0);
}
