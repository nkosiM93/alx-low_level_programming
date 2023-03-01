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

	while (str[a] != '\0')
	{
		c++;
		a++;
	}

	for (a = 0; a < c; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}

	_putchar('\n');
}
