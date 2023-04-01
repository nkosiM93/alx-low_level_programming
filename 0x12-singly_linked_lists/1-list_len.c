#include "lists.h"
#include <stdlib.h>

/**
 * list_le - ...
 * @h: ...
 * Return: ...
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while(h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
