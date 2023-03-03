#include "main.h"

/**
 * _strcmp -  compare two strings
 * @s1: ...
 * @s2: ...
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int sc1, sc2;

	sc1 = 0;

	while (s1[sc1] != '\0')
		sc1++;

	sc2 = 0;

	while (s2[sc2] != '\0')
		sc2++;
	
	return (sc1 - sc2);
}
