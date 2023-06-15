#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in list
 * @h: head pointer of the list
 *
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *dCopy;
	size_t n = 0;

	dCopy = h;

	if (dCopy == NULL)
		return (n);

	while (dCopy != NULL)
	{
		dCopy = dCopy->next;
		n++;
	}

	return (n);
}
