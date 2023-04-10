#include "main.h"

/**
 * print_binary - converts decimal to binary
 * @n: the decimal to be converted
 * Return: the binary equivalent
 */

void print_binary(unsigned long int n)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (n >= 2)
	{
		n -= 2;
		count++;
	}

	print_binary(count);
	_putchar(n + '0');
}
