#include "dog.h"
/**
 * free_dog - frees a dog struct
 * @d: a struct dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
free(d);
}
