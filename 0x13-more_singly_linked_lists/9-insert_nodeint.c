#include "lists.h"

/**
 * makeNode - makes anew node
 * @cnode: pointer to the current node
 * Return: returns the address of the newly created node
 */

listint_t *makeNode(listint_t *node, listint_t *p, int n)
{
	listint_t *node1 = malloc(sizeof(listint_t));

	if (!node1)
		return (NULL);

	node1->n = n;

	if (node == NULL)
	{
		node1->next = NULL;
		return (node1);
	}
		
	node1->next = p->next;
	p->next = node1;

	return (node1);
}

/**
 * insert_nodeint_at_index - inserts a node at a specific
 * position
 * @head: the pointer to the first node
 * @idx: position to add the node
 * @n: the integer to insert into the node/contained
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *dup, *prev;
	unsigned int ind = 0;

	if (!head)
		return (NULL);

	dup = *head;

	while (dup->next != NULL)
	{
		if (idx == ind)
		{
			return (makeNode(dup, prev, n));
		}
		else
		{
			prev = dup;
			dup = dup->next;
			ind++;
		}
	}

	prev = NULL;

	if (dup->next == NULL && idx == 0)
	{
		*head = makeNode(dup, NULL, n);
		return (*head);
	}
	
	return (NULL);
}
