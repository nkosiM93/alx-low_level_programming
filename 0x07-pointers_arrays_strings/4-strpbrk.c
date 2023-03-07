#include "main.h"

/**
 * _strpbrk - ...
 * @s: ...
 * @accept: ...
 * Return: ...
 */

char *_strpbrk(char *s, char *accept)
{
	int t, d;

	t = 0;


	while (s[t] != '\0')
	{
		d = 0;

		while (accept[d] != '\0')
		{
			if (s[t] == accept[d])
				return (s + t);
			else
				d++;
		}

		t++;
	}

	return (NULL);
}
