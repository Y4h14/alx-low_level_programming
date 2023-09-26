#include "lists.h"
/**
 * reverse_listint - reverses a listint_t
 * @head: pointer the the header node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *next, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);


	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;

	return (*head);
}
