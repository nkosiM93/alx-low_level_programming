#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string:s
 * @s: the string;
 */

void rev_string(char *s)
{
	int a, mid;
	char swap;
	int length;

	mid = strlen(s) / 2;
	length = sizeof(s) / sizeof(s[0]);
	for (a = 0; a < mid; a++)
	{
		swap = s[a];
		s[a] = s[length - a - 2];
		s[length - a - 2] =  swap;
	}

}
