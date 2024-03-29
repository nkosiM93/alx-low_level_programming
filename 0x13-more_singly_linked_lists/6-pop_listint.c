#include "lists.h"

/**
 * pop_listint - deletes the head node and returns
 * the data that was contained in the head node
 *
 * @head: the linked list
 * Return: data contained in list
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n1;

	if (!head || !(*head))
		return (0);

	n1 = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (n1);
}
