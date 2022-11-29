#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beggining
 * @head: pointer to the head
 * @n: number of nodes
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new = *head;

	return (*head);
}
