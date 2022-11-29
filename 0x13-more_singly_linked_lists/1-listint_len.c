#include "lists.h"

/**
 * listint_len - function to return the number of elements
 * @h: pointer to the head of the list
 *
 * Return: thr number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
