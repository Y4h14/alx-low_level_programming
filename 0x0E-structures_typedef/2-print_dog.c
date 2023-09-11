#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct type dog
 * @d: a sturct dog
 * Returns: nothing.
 */
void print_dog(struct dog *d)
{
if (d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");

}

}
