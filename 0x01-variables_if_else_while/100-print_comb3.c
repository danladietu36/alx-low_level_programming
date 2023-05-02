#include <stdio.h>
/**
 * main - possible combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 70; i++)
	
		putchar((i % 10) + '0');
	
	for (i = 1; i < 71; i++)
	
		putchar((i % 10) + '0');
	
	
	if (i != 69 && i !=70 )
		{
			putchar(',');
			putchar(' ');
		}
	
	putchar('\n');

	return (0);
}


