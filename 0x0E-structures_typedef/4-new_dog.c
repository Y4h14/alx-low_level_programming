#include "dog.h"
int len(char *s);
char *_strcopy(char *dest, char *src);
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
int lend, leno;

lend = len(name);
leno = len(owner);

newdog = malloc(sizeof(struct dog));
if (newdog == NULL)
	return (NULL);

newdog->name = malloc((lend + 1) * sizeof(char));
if (newdog->name == NULL)
{
	free(newdog);
	return (NULL);
}
newdog->owner = malloc((leno + 1) * sizeof(char));
if (newdog->owner == NULL)
{
	free(newdog->name);
	free(newdog);
	return (NULL);
}
_strcopy(newdog->name, name);
newdog->age = age;
_strcopy(newdog->owner, owner);
return (newdog);
}
/**
 * len - calculates the lenth of a string
 * @s: a string of char
 * Return: lenth of the string
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
/**
 * _strcopy - copyies a string
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
int len = 0, i;
while (src[len] != '\0')
{
	len++;
}
for (i = 0; i < len; i++)
	dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
