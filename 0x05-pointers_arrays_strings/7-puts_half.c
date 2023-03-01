#include <stdio.h>
#include "main.h"

/**
 * puts_half - half
 * @str: ths text
 */

void puts_half(char *str)
{
	int a, c;
	
	c = 0;
	a = 0;

	while (str[a] != '\0')
	{
		c++;
		a++;
	}

	if (c % 2 != 0 )
	{
		for(a = c / 2 + 1; a < c; a++)
			_putchar(str[a]);
	}
	else
	{
		for (a = c / 2; a < c; a++)
			_putchar(str[a]);
	}

	_putchar('\n');
}
