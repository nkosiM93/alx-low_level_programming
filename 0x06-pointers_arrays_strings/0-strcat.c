#include <stdio.h>
#include "main.h"

/**
 * _strcat - combine two sentences
 * @dest: the other text
 * @src: The other text
 * Return: combined string
 */

char *_strcat(char *dest, char *src)
{
	int a, c;

	a = 0;

	while (dest[a] != '\0')
		a++;

	c = 0;

	while (src[c] != '\0')
	{
		dest[c + a] = src[c];
		c++;
	}
	return (dest);
}
