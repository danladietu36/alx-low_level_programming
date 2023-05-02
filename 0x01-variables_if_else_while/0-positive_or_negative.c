/* This is  to calculate random numbers*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point to know if the number is positive, negative or 0
* Return: On succes, return 0
*/
int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
