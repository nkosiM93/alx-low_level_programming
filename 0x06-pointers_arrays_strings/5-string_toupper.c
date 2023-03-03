#include "main.h"
#include <ctype.h>

/**
 * _char_toupper -  to uppercase
 * @str: the string
 * Return: string capitalised
 */

char *_char_toupper(char *str)
{

	while (*str)
	{
		*str = toupper(*str);
		str++;
	}

	return (str);
}
