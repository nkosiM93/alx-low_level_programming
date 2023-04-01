#include "lists.h"
#include <stdlib.h>

/**
 * print_list - ....
 * @h: list to be printed
 * Return: ...
 */
size_t print_list(const list_t *h)
{
	size_t number;
	
	number = 0;
	
	/*if (h != NULL)
	{*/
		while (h != NULL)
		{
			if (h->str != NULL)
			{
				printf("[%d]", h->len);
				printf(" %s\n", h->str);
			}
			else
			{
				printf("[0] (nill)\n");
			}
			number++;
			h = h->next;
		}
	/*i}*/

	return (number);
}
