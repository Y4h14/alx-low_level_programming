#include "dog.h"
int len(char *s);
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
int lend, leno, i, j;
lend = len(name);
leno = len(owner);

newdog = malloc(sizeof(struct dog));
if (newdog == NULL)
	return (NULL);

if (name == NULL || owner == NULL)
	return (NULL);

n = malloc(lend *sizeof(char));
if (n == NULL)
	return (NULL);
o = malloc(leno *sizeof(char));
if (o == NULL)
	return (NULL);

for (i = 0; name[i] != '\0'; i++)
	n[i] = name[i];
n[i] = '\0';
for (j = 0; owner[j] != '\0'; j++) 
	o[i] = owner[i];
o[i] = '\0';

newdog->name = n;
newdog->age = age;
newdog->owner = o;
return (newdog);
}
/**
 * len - calculates the lenth of a string
 * @s: a string of char
 * Returns: lenth of the string
 */
int len(char *s)
{
int i = 0;
while (s[i] != '\0')
{
	i++;
}
return (i);
}
