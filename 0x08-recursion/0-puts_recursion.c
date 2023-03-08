#include "main.h"

/**
 * _puts_recursion - prints a sentence recursively
 * @s: the strign to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
	/*_puts_recursion(s++); point to the next character in the string*/
}
