#include "main.h"

/**
 * _memset - ...
 * @s: ...
 * @b: ...
 * @n: ...
 * Return: ...
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	g = 0;

	for (; g < n; g++)
	{
		s[g] = b;
	}

	return (s);
}
