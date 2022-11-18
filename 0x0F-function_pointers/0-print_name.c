#include "main.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: argument
 * @f: function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != 0) && (f != NULL))
		f(name);
}
