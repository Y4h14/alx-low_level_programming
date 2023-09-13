#include "function_pointers.h"
/**
 * array_iterator - execute a function on each elements of an array
 * @array: an array of intigers
 * @size: the size of the array
 * @action: a pointer to a function
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array != NULL && size > 0 && action != NULL)
{
	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
}
