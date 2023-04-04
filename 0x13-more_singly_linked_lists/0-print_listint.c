#include "lists.h"

/**
 * print_listint - prints  the contents of a linked list
 * @h: the list to be printed
 * Return: returns the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (0);

	printf("%d\n", temp->n);
	num++;
	while (temp->next != NULL)
	{
		temp = temp->next;
		printf("%d\n", temp->n);
		num++;
	}
	return (num);
}
