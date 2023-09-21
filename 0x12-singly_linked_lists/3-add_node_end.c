#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: first element in the list
 * @str: the string value of the node
 * Return: the adress of the new node or null if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *curr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new;
	return (new);

}
