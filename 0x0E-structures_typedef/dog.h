#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - a struct that describes a dog
 * @age: dog's age
 * @name: the name of the  dog
 * @owner: the owner of the dog
 *
 * Description: ...
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
