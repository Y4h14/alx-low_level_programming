#include "lists.h"
/**
 * sum_dlistintn- sums all the data of a list
 * @head: the head node of a list
 * Retrun: the sum of list data or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
