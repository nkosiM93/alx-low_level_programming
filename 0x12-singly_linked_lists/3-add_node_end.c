#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - ...
 * @head: ...
 * @str: ...
 * return: ...
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *str1;
	list_t *newN;
	list_t *last;

	last = *head;
	newN = malloc(sizeof(list_t));
	str1 = strdup(str);

	if (newN == NULL || str1 == NULL)
	{
		free(str1);
		free(newN);
		return (NULL);
	}

	newN->str = str1;
	newN->len = strlen(str1);
	newN->next = NULL;

	if (*head == NULL)
	{
		*head = newN;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newN;

	return (*head);
}
