#include "main.h"
#include <stdlib.h>

/**
 * _calloc - alloctes memory foran array
 * @nmemb: number of elements to b allocated mem for
 * @size: byte size ofeach element
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *returned = malloc(size * nmemb);
	unsigned int i;

	if (nmemb == 0 || size == 0 || returned == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		*(returned + i) = (unsigned char)0;

	return (returned);
}
