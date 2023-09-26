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
	listint_t *curr, *temp, *target;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (0);
	}

	while (curr)
	{
		if (index == (i + 1))
		{
			target = curr->next;
			temp = target->next;
			free(target);
			curr->next = temp;
			return (1);
		}
		curr = curr->next;
		i++;
	}
	return (-1);
}
