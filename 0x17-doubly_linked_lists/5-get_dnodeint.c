#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - get the nth node
 * @head: the hedder node
 * @index: the index of the node
 * Return: the node or null if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head);
}
