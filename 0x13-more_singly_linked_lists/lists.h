#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
typedef struct listint_t *nodeptr;
/**
* struct list_t - a linked list implementation
* @str: a string
* @len: an int
* @next: pointer to the next node
*/
struct listint_t
{
        int n;
        nodeptr next;
};
typedef struct listint_t listint_t;
/*Utility function*/
/*Functions defintions*/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
#endif
