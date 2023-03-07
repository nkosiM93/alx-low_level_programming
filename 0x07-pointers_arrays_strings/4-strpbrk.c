#include "main.h"

/**
 * _strpbrk - ...
 * @s: ...
 * @accept: ...
 * Return: ...
 */

char *_strpbrk(char *s, char *accept)
{
	int t;

	t = 0;


	while (s[t] != '\0' && accept[t] != '\0')
	{
		if (s[t] == accept[t])
			return (s + t);

		t++;
	}

	return (NULL);
}
