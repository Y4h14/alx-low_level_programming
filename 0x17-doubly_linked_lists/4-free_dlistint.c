#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head node
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;

	}
}
