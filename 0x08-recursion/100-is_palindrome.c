#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * is_palindrome - ...
 * @s: ...
 * Return: ...
 */

int is_palindrome(char *s)
{
	int res, c, l;
	char *d;

	d = strdup(s);
	c = 0;
	
	if (s == NULL || d == NULL)
	{
		free(d);
		return (0);
	}

	res = 0;
	l = strlen(d);

	while (s)
	{
		s--;
		c++;
	}

	s++;

	if ((c > (l / 2)) || strcmp(s, "") == 0)
		return (1);

	if (*((s + c) - 1) == *((s + l) - c))
	{
		res = is_palindrome(s);
	}

	return (res);
}
