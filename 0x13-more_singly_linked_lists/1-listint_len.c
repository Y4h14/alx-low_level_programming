#include "lists.h"
/**
 * listint_len - measure the length of a list
 * @h:  a listint_t
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
