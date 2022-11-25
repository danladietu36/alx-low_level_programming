#include "lists.h"

/**
 * list_len - function to return the numebr of element in a linked list
 * @h: pointer to the linked list
 *
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
