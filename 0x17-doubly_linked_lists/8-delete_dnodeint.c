#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes a node at an indx
 * @head: pointer to the header node
 * @index: the index of the node to be deleted
 * Return: 1 if success or -1 in failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr, *prev, *next;

	if (head == NULL)
		return (-1);

	curr = *head;
	for (i = 0; i < index && curr != NULL; i++)
		curr = curr->next;
	if (curr == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		next->prev = NULL;
		head = &next;
	}
	else
	{
		next = curr->next;
		prev = curr->prev;

		prev->next = next;
		next->prev = prev;
		free(curr);
	}
	return (1);
}
