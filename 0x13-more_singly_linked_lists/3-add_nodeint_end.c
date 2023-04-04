#include "lists.h"

/**
 * add_nodeint_end - ...
 * @head: ...
 * @n: ...
 * Return: ...
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *thru = *head;

	listint_t *ne = malloc(sizeof(listint_t));

	if (ne == NULL)
	{
		free(ne);
		return (NULL);
	}

	ne->n = n;
	ne->next = NULL;

	if (*head == NULL)
	{
		*head = ne;
		return (*head);
	}

	while (thru->next != NULL)
		thru = thru->next;

	thru->next = ne;

	return (*head);
}
