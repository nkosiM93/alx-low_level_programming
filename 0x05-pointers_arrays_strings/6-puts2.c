#include "main.h"
#include <stdio.h>

/**
 * puts2- -  puts
 * @str: variable
 */
void puts2(char *str)
{
	int a, c;
	c = 0;
	a = 0;

	while (s[a] != '\0')
	{
		c++;
		a++;
	}

	for (a = 0; a < c; a++)
	{
		if (a % 2 == 0)
			_putchar(s[a]);
	}

	_putchar('\n');
}
