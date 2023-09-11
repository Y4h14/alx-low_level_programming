#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - dog related information
 * @name: dog's name
 * @age: dog's age
 * @owner: the owner of the dog
 */
struct dog
{

char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* define DOG_H*/
