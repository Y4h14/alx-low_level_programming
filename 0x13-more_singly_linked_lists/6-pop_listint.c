#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head: a pointer to the headder node
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *curr;

	if (head == NULL || *head == NULL)
		return (0);
	curr = *head;
	n = curr->n;
	*head = curr->next;
	free(curr);

	return (n);
}
