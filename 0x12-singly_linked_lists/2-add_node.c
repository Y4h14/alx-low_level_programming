#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of the list
 * @head: pointer to the head node
 * @str: a string to be added to the node
 * Return: the address of the new element or NULL if failled
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);

	new->next = *head;
	*head = new;
	return (new);

}
