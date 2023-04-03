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
	if (newN == NULL)
	{
		free(newN);
		return (NULL);
	}

	str1 = strdup(str);
	newN->str = str1;
	newN->len = strlen(str1);
	newN->next = NULL;

	if (*head == NULL)
	{
		*head = newN;
		return (*head);
	}

	while (head->next != NULL)
		last = head->next;

	*head->next = newN;

	return (*head);

}
