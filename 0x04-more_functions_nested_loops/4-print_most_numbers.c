#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - 0 to 0 exc 2 and 4
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n);
		else
			continue;
	}

	_putchar('\n');
}
