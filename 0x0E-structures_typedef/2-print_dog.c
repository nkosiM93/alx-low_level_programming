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
	char result[20];
	
	sprintf(result, "%f", d->age);

	if (d)
	{
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		printf("Age: %s\n", (!isnan(d->age) ? result : "(nil)"));
		printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
	}

}
