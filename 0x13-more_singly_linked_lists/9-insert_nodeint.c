#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: a pointer to the header node
 * @idx: the index of the new node
 * @n: the value of the node
 * Return: the address of the new node of NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *curr, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	curr = *head;
	if  (idx == 0)
	{
		*head = new;
		new->next = curr;
		return (new);
	}
	while (curr)
	{
		if (i == idx)
		{
			new->next = curr->next;
			curr->next = new;
		}
		curr = curr->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	return (new);
}
