#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - adds a new node at the begginning of a list
 * @head: pointer to the head of the list
 * @n: the value of the new node
 * Return: pointer to to the new element or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (new->next != NULL)
		(new->next)->prev = new;

	return (new);
}
