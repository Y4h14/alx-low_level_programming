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
	dlistint_t *curr;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
			(curr->next)->prev = NULL;
		free(curr);
		return (1);
	}
	for (i =0; i < index; i ++)
	{
		if (curr->next != NULL)
			curr = curr->next;
		else
			return (-1);
	}
	(curr->prev)->next = curr->next;
	if (curr->next != NULL)
		(curr->next)->prev = curr->prev;
	free(curr);
	return (1);
}
