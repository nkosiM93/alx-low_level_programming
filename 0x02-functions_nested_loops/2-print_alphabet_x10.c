#include <unistd.h>
#include "main.h"

/**
 *print_alphabet_x10 - print ABC x 10
 */
void print_alphabet_x10(void)
{
	char index;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (index = 'a'; index <= 'z'; index++)
			write(1, &index, 1);

		write(1, "\n", 1);
	}
}
