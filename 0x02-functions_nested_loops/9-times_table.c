#include <unistd.h>
#include "main.h"

/**
 *times_table - show 9 x table
 */

void times_table(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		int y;

		for (y = 0; y < 10; y++)
		{
			if ((y * x) < 10)
			{
				_putchar('0' + (y * x));

				if (y < 9)
				{
					_putchar(',');
					_putchar(' ');
					/*_putchar(' ');*/
				}
			}
			else
			{
				_putchar('0' + ((y * x) / 10));
				_putchar('0' + ((y * x) % 10));

				if (y < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
