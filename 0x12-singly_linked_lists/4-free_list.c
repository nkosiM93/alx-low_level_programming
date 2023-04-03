#include "lists.h"
#include <stdlib.h>

/**
 * free_list - ...
 * @head: ...
 */

void free_list(list_t *head)
{
	list_t *t, *h;

	t = head;

	while (t != NULL)
	{
		h = t;
		free(h->str);
		free(h)
		t = t->next;
	}
}
