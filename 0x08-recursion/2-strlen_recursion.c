#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be counted
 * Return: integer length of string being counted
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0); /*hopefully this doesn't end the program at this point*/

	return (1 + _strlen_recursion(s + 1));
}
