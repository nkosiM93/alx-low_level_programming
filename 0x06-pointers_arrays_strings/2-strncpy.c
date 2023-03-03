#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy up to n characters
 * @dest: final string
 * @src: to be appended
 * Return: final string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
