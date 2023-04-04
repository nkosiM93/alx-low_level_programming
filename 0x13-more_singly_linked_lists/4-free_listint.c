#include "lists.h"

/**
 * free_listint - ...
 * @head: ...
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;

	tmp = *head;
	free(tmp);

	while (*head->next != NULL)
	{
		tmp = *head;
		*head = *head->next;
		free(tmp);
	}
}
