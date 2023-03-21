#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog details
 * @d: pointer to the struct
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
