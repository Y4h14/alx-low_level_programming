#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: the head node of the list
 * @n: the value of the node (int)
 * Return: the adress of the new element or null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
