#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		free(current->str);
		head = head->next;
		free(current);
	}
}

