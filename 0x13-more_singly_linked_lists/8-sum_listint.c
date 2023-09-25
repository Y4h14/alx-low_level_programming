#include "lists.h"
/**
 * sum_listint - sums all data in a linked list
 * @head: the first node in the list(head node)
 * Return: the sum of all data(n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr;

	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
