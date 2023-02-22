#include "main.h"
#include <unist.h>

/**
 *jack_bauer -  prints time
 */

void jack_bauer(void)
{
	int x;

	for (x = 0; x < 24; x++0)
	{
		int y;

		for (y = 0; y < 60; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
}
