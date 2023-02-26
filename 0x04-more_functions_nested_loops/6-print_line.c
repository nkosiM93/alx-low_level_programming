#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a straight line
 */

void print_line(int n)
{
	int z;

	for (z = 0; z <= n; z++)
		_putchar('_');
	_putchar('\n');
}
