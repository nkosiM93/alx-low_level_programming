#include "main.h"
#include <stdlib.h>

/**
 * free_dog - frees memory
 * @d: memory pointer to be free
 */

void free_dog(dog_t *d)
{
	free(d);
}
