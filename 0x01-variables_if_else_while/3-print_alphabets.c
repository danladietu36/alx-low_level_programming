#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point to progam to print alphabet A and a
 * Return: Always 0
 */
int main(void)
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);

	putchar('\n');
	return (0);
}
