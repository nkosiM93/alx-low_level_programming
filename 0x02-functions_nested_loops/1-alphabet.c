#include <unistd.h>
#include "main.h"

/**
 *print_alphabet - prints ABC
 *Description: Program prints alphabet in lowercase.
 *
 *Return: 0 (Success)
 */

void print_alphabet(void)
{
	char character = 'a';

	for (; character <= 'z'; character++)
	{
		write(1, &character, 1);
	}

	write(1, "\n", 1);
}
