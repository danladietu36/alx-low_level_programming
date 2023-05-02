#include <stdlib.h>
#include <stdio.h>
/**
 * main - Program to print char
 * Return: On succes, 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
