#include "main.h"

/**
 * _strcmp -  compare two strings
 * @s1: ...
 * @s2: ...
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int sc1;

	sc1 = 0;

	while (s2[sc1] != '\0' || s1[sc1] != '\0')
	{
		if (s1[sc1] > s2[sc1] || s1[sc1] < s2[sc1])
			return (s1[sc1] - s2[sc1]);

		sc1++;
	}

	return (s1[sc1] - s2[sc1]);
}
