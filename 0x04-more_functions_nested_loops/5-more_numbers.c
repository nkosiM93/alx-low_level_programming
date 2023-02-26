#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0 -14 ten times
 */

void more_numbers(void)
{
	int a, b, c;

	for (c = 0; c < 9; c++)
	{
		for (a = 48; a <= 49; a++)
		{
			for (b = 48; b < 58; b++)
			{
				if (a >= 49 && b <= 52)
					_putchar(a);
				if (a >= 49 && b > 52)
				{}
				else
					_putchar(b);
			}
		}
		_putchar('\n');
	}
}
