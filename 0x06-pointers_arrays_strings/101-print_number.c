#include "main.h"

/**
 * print_number-prints an integer
 * @n: the in to be printed
 */

void print_number(int n)
{
	int digits[12];
	int y;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		n = -n; /*change the value to a positive one*/
		_putchar('-');
	}

	y = -1;

	while (n != 0)
	{
		digits[++y] = n % 10;
		n /= 10;
	}

	/*Display the digits*/
	for (; y >= 0; y--)
		_putchar(48 + digits[y]);
}
