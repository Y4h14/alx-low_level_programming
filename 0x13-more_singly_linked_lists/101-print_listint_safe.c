#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a listint_t
 * @head: first node in the list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0;



	if (head == NULL)
		return (0);


	while (head && head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		if (head == head->next->next)
			exit(98);
		i++;
	}

	return (i);
}
