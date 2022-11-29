#include "lists.h"

/**
 * print_listint - function to print all the elements of a list
 * @h: pointer to the node
 *
 * Return: The number of nosdes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d,\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
