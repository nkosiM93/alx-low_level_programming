#include <stdio.h>
#include "main.h"

/**
 * _strncat -  cobine strings with options
 * @dest: final string
 * @src: string to be appended
 * @n: number of characters to be appended
 * Return: the retun
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, a;

	a = 0;

	while (dest[a] != '\0')
		a++;

	for (c = 0; c < n; c++)
	{
		dest[c + a] = src[c];
	}
	return (dest);
}
