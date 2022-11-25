#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints all the elemements
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	if (!h->str)
		printf("[0] (nil)");
	else
		printf("%u, %s", h->len, h->str);
	s++;

	return (s);
}
