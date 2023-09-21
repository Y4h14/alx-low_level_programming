#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints all elements of list_t
 * @h: a list_t object
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int n = 0;
	/*list_t temp;*/

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
