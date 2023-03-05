#include "main.h"
#include <ctype.h>

/**
 * rot13 - encrypt
 * @str: ...
 * Return: ...
 */

char *rot13(char *str)
{
	char rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char alpha52[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	int s, d;

	for (s = 0; str[s] != '\0'; s++) /*String iteration*/
		for (d = 0; d < 52; d++)
		{
			if (str[s] == alpha52[d])
			{
				str[s] = rot13[d];
				break;
			}
		}
	return (str);
}
