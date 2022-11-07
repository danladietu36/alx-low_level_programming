#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("argv[%d] = %s\n", counter, argv[counter]);
	}

	return (0);
}
