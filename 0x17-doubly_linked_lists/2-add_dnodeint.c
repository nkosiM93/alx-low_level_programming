#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add anode to the doubly linked list
 * @head: head of the list
 * @n: the value of the element in the list
 *
 * Return: last added node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}

