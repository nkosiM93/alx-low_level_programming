#include "main.h"
#include <string.h>
#include <math.h>
/**
 * _pow - calculates the powers of numbers
 * @a: the base
 * @d: the exponent
 * Return: the result
 */

unsigned int _pow(unsigned int a, unsigned int d)
{
	int c = 1, e = a;

	if (a == 0 && d == 0)
		return (0);

	if (d == 0)
		return (1);

	if (d == 1)
		return (a);

	while (d > 0)
	{
		a *= e;

		if (c == 1)
		{
			d -= 2;
			c++;
		}
		else
			d--;
	}
	return (a);
}

/**
 * binary_to_int - converts a binary number to a n
 * unsignede int
 * @b: the bianary number to be represented as an unsigned int
 * Return: unsigned equivalent ogf the binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	while (*b)
	{
		len--;
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '0')
			b++;
		else
		{
			res += _pow(2, len);
			b++;
		}
	}

	return (res);
}
