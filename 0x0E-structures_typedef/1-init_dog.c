#include "dog.h"

/**
 * init_dog - initializes variable of type struct
 * @d: pointer to the structire
 * @name: ...
 * @age: ...
 * @owner: ...
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
