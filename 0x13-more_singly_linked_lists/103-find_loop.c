#include "lists.h"
/**
 * find_listint_loop - finds a loop in alinked list
 * @head: the first node in a list
 * Return: the adress of the node where the loop start or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1, *p2;

	if (head == NULL)
		return (NULL);
	p1 = head;
	p2 = head;
	while (p1 && p2 && p2->next)
	{
		p1 = p1->next;
		p2 = (p2->next)->next;
		if (p1 == p2)
			return (p2);
	}
	return (NULL);
}

