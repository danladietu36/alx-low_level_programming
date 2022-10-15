#include <stdlib.h>
#include <stdio.h>
/**
 * main - Alphabet printing with char
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
