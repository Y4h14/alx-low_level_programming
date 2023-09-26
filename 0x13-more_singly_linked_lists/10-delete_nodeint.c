#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at an index
 * @head: pointer to the first element of the list
 * @index: the index of the node
 * Return: 1 if it succeeded, -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}
	while (curr)
	{
		if (curr->next == NULL)
		{
			return (-1);
		}
		if (index == (i + 1))
		{
			next = curr->next;
			curr->next = next->next;
			free(next);
			return (1);
		}
		curr = curr->next;
		i++;
	}
	return (-1);
}
