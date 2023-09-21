#include "lists.h"
/**
 * list_len - gets the length of a linked list
 * @h: a list of type list_t
 * Return: the length of the linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
