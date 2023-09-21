#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/*Struct definition*/
typedef struct list_t *nodeptr;
struct list_t
{
	char *str;
	int len;
	nodeptr next;
};
typedef struct list_t list_t;

/*Functions defintions*/
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
