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
	int c, a, s;

	a = 0;
	s = 0;

	while (dest[a] != '\0')
		a++;

	while (src[s] != '\0')
		s++;

	c = 0;

	if (s < n)
		while (src[c] != '\0')
			dest[c + a] = src[c];
	else
		for (c = 0; c < n; c++)
		{
			dest[c + a] = src[c];
		}
	return (dest);
}
