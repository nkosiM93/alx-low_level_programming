#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * @head: The list
 * @index: the nth node to be returned
 * Return: The requested node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;
	listint_t *node;

	node = NULL;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (index == ind)
		{
			node = head;
			return (node);
		}
		else
		{
			head = head->next;
			ind++;
		}
	}

	return (node);
}
