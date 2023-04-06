#include "lists.h"

/**
 * free_listint2 - Frees a list but sets head to NULL
 * @head: the head to the lst to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		 free(tmp);
	}

	if (!(*head))
		return;
}
