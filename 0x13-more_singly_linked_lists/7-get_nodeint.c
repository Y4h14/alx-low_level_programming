#include "lists.h"
/**
 * get_nodeint_at_index - find node by index
 * @head: the heading node
 * @index: node index
 * Return: the node at index or null if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr;

	curr = head;
	while (curr)
	{
		if (i == index)
			return (curr);
		curr = curr->next;
		i++;
	}
	return (NULL);
}
