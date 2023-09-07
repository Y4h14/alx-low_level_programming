#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory blocking
 * @ptr: a pointer
 * @old_size: unsigned intiger
 * @new_size: unsigned intiger
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *newptr, *oldptr;

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}

if (ptr == NULL)
	return (malloc(new_size));

if (new_size == old_size)
	return (ptr);

oldptr = ptr;
newptr = malloc(new_size);
if (newptr == NULL)
	return (NULL);
if (new_size > old_size)
{
	for (i = 0 ; i < new_size; i++)
		newptr[i] = oldptr[i];
}

if (new_size < old_size)
{
	for (i = 0; i < old_size; i++)
		newptr[i] = oldptr[i];
}
free(ptr);
return (newptr);
}
