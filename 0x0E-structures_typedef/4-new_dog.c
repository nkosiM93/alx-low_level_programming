#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: ...
 * @age: ...
 * @owner: ...
 * Return: pointer to a new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *_name = name;
	char *_owner = owner;

	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog != NULL)
	{
		my_dog->name = _name;
		my_dog->age = age;
		my_dog->owner = _owner;
	}

	return (my_dog);
}
