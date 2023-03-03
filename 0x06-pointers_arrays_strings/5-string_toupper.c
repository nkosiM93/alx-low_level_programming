#include "main.h"
#include <ctype.h>

/**
 * string_toupper -  to uppercase
 * @str: the string
 * Return: string capitalised
 */

char *string_toupper(char *str)
{
	char *pr;

	pr = str;

	while (*pr != '\0')
	{
		*pr = toupper(*pr);
		pr++;
	}

	return (str);
}
