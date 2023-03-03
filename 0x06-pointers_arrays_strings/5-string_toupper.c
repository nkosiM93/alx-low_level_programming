#include "main.h"
#include <ctype.h>

/**
 * string_toupper -  to uppercase
 * @str: the string
 * Return: string capitalised
 */

char *string_toupper(char *str)
{

	while (*str)
	{
		*str = toupper(*str);
		str++;
	}

	return (str);
}
