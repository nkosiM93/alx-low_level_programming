#include "main.h"

/**
 * print_number-prints an integer
 * @n: the in to be printed
 */

void print_number(int n)
{
	int divisor;

	divisor = 1000000000;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		if (n != -2147483648)
		{
			n = -n; /*change the value to a positive one*/
			_putchar('-');
		}
		else
		{
			_putchar('-');
			_putchar('2');
			n = 147483648;
		}
	}

	while (n / divisor == 0)
		divisor /= 10;

	while (divisor >= 1)
	{
		_putchar(48 + (n / divisor));
		n %= divisor;
		divisor /= 10;
	}
}
