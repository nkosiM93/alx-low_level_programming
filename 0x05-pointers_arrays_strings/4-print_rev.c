#include <string.h>
#include "main.h"

/**
 * print_rev -print characters in reverse
 * @s: string literal
 */

void print_rev(char *s)
{
	int a;
	int c;

	a = 0;
	c = 0;


	while (s[a] != '\0')
	{
		c++;
		a++;
	}

	for (a = c - 1; a > -1;  a--)
		_putchar(s[a]);
	_putchar('\n');
}
