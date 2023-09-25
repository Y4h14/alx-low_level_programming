#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node to the end of the list
 * @head: the header node
 * @n: the value of the new node (int)
 * Return: address of the new ndoe or null when failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *curr;

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	curr = *head;
	while (curr->next)
	{
		curr = curr->next;
	}
	curr->next = new;

	return (new);

}
