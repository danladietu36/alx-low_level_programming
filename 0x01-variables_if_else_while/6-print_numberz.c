#include <stdio.h>
/**
 * main - Program to prints 0 -9 using putchar function
 * Return: Always 0
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 < 10; num1++)
		putchar((num1 % 10) + '0');

	putchar('\n');

	return (0);
}
