#include "lists.h"

/**
 * listint_len - prints  the contents of a linked list
 * @h: the list to be printed
 * Return: returns the number of nodes printed
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (0);

	num++; /*first element counted here*/

	while (temp->next != NULL)
	{
		temp = temp->next;
		num++;
	}
	return (num);
}
