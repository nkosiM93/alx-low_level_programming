#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns pointer and 98 if failed
 * @b:...
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pInt = malloc(b);

	if (pInt == NULL)
		exit(98);

	return (pInt);
}
