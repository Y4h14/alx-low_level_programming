#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert a node at position idx
 * @h: pointer to the header node
 * @idx: index of the node to be added
 * @n: the value of the new node
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	curr = *h;
	for (i = 0; i < idx && curr != NULL; i++)
		curr = curr->next;
	if (curr == NULL)
		return (NULL);

	new->n = n;
	new->prev = curr->prev;
	new->next = curr;
	if (new->next != NULL)
		(new->next)->prev = new;
	(curr->prev)->next = new;
	curr->prev = new;

	return (new);
}
