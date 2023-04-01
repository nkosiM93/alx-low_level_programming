#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - ...
 * @head: ...
 * @str: ...
 * Return: ...
 */

list_t *add_node(list_t **head, const char *str)
{
	char *str1;
	list_t *newN;

	str1 = strdup(str);

	newN = malloc(sizeof(list_t)); /*mem allocation for the new struct*/

	if (newN == NULL)
	{
		free(newN);
		return (NULL);
	}

	newN->str = str1;
	newN->len = strlen(str1);
	newN->next = *head;
	*head = newN;

	return (*head);
}
