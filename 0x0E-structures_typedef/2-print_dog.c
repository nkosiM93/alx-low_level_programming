#include "dog.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * print_dog - prints dog details
 * @d: pointer to the struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
	}
}
