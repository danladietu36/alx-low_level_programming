#include "hash_tables.h"

/**
 * hash_table_delete - Function to deletes a hash table.
 * @hth: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *hth)
{
	hash_table_t *head = hth;
	hash_node_t *node, *tmp;
	unsigned long int x;

	for (i = 0; x < hth->size; x++)
	{
		if (hth->array[x] != NULL)
		{
			node = hth->array[x];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
