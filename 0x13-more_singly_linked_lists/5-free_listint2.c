#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t
 * @head: a pointer to the header node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	curr = *head;
	while (curr)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}
	*head =  curr;
}
