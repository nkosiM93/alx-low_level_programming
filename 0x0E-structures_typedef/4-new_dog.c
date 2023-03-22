#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: ...
 * @age: ...
 * @owner: ...
 * Return: pointer to a new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *_name;
	char *_owner;
	dog_t *my_dog;

	_name = malloc(strlen(name) + 1);
	_owner = malloc(strlen(owner) + 1);

	if (_name != NULL && _owner != NULL)
	{
		strcpy(_name, name);
		strcpy(_owner, owner);
	}
	else
		return (NULL);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog != NULL)
	{
		my_dog->name = _name;
		my_dog->age = age;
		my_dog->owner = _owner;
	}
	else
	{
		free(_name);
		free(_owner);
		return (NULL);
	}

	return (my_dog);
}
