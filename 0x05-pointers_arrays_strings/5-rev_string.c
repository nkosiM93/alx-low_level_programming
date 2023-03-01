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
	size_t length;

	mid = strlen(s) / 2;
	a = 0;
	length = 0;

	while (s[a] != '\0')
        {
                length++;
                a++;
        }

	for (a = 0; a < mid; a++)
	{
		swap = s[a];
		s[a] = s[length - a - 1];
		s[length - a - 1] =  swap;
	}

}
