#include "main.h"

/**
 * _strchr - ...
 * Return: ...
 * @s: ...
 * @c: ...
 */

char *_strchr(char *s, char c)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			return (s + j);
		}

		j++;
	}

	return (NULL);
}
