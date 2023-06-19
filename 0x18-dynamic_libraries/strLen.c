#include <stddef.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string ti0 be counted
 * Return: the length of the string in question
 */

int _strlen(char *s)
{
	const char *theStr = s;
	int n = 0;

	if (s == NULL)
		return (0);

	while (*theStr)
	{
		n++;
		theStr++;
	}

	return (n);
}
