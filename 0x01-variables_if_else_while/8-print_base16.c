#include <stdio.h>
/**
 * main - numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int num1;
	char c;
	for (num1= 0; num1 < 10; num1++)
		putchar((num1 % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
