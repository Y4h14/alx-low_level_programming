#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: a dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
char *n, *o;

newdog = malloc(sizeof(struct dog));
if (newdog == NULL)
	return (NULL);
if (name == NULL)
	return (NULL);
if (owner == NULL)
	return (NULL);
n = name;
o = owner;
newdog->name = n;
newdog->age = age;
newdog->owner = o;
return (newdog);
}
