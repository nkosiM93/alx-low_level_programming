#include "main.h"

/**
 * _memcpy - ...
 * @dest: ..
 * @src: ...
 * @n: ...
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		dest[g] = src[g];
	}

	return (dest);
}
