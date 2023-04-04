#include "lists.h"

/**
 * add_nodeint - ...
 * @head: ...
 * @n: element to be added to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ne = malloc(sizeof(listint_t));

	if (ne == NULL)
	{
		free(ne);
		return (NULL);
	}

	ne->n = n;
	ne->next = *head;
	*head = ne;/*ne is now the first element in the list*/

	return (*head);
}
