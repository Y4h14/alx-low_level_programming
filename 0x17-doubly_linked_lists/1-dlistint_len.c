#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - count the number of elements in a list
 * @h: the head of the list
 * Return: the length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
