#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverse a tring
 * @s: str to b reversed
 */

void print_rev(char *s)
{
	char t;
	int middle;
	int count;

	middle = strlen(s) / 2;
	for (count = 0; count < middle; count++)
	{
		t = s[count];
		s[count] = s[strlen(s) - count - 1];
		s[strlen(s) - count - 1] = t;

	}

	puts(s);
}
